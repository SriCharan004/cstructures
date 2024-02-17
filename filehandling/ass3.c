// studentRecord.h

#ifndef STUDENT_RECORD_H
#define STUDENT_RECORD_H

struct StudentRecord {
    char name[50];
    float age;
    int regdNo;
    float gpa;
};

void insertRecord(FILE *fp);
void displayRecords(FILE *fp);
void modifyRecord(FILE *fp, int RegdNo, float newGPA);
void deleteRecord(FILE *fp, int RegdNo);

#endif

// studentrecord.c

#include <stdio.h>
#include "studentRecord.h"

void insertRecord(FILE *fp) {
    struct StudentRecord record;

    printf("Enter name: ");
    scanf("%s", record.name);
    printf("Enter age: ");
    scanf("%f", &record.age);
    printf("Enter registration number: ");
    scanf("%d", &record.regdNo);
    printf("Enter GPA: ");
    scanf("%f", &record.gpa);

    // Append the record to the file
    fwrite(&record, sizeof(struct StudentRecord), 1, fp);
}

void displayRecords(FILE *fp) {
    struct StudentRecord record;

    // Read and display all records from the file
    rewind(fp); // Move file pointer to the beginning
    while (fread(&record, sizeof(struct StudentRecord), 1, fp)) {
        printf("Name: %s, Age: %.2f, Registration No: %d, GPA: %.2f\n", record.name, record.age, record.regdNo, record.gpa);
    }
}

void modifyRecord(FILE *fp, int RegdNo, float newGPA) {
    struct StudentRecord record;

    // Search for the record with the given registration number
    rewind(fp);
    while (fread(&record, sizeof(struct StudentRecord), 1, fp)) {
        if (record.regdNo == RegdNo) {
            // Modify the GPA of the found record
            record.gpa = newGPA;
            fseek(fp, -sizeof(struct StudentRecord), SEEK_CUR); // Move file pointer back to the beginning of the record
            fwrite(&record, sizeof(struct StudentRecord), 1, fp); // Write the modified record
            printf("Record with registration number %d modified successfully.\n", RegdNo);
            return;
        }
    }
    printf("Record with registration number %d not found.\n", RegdNo);
}

void deleteRecord(FILE *fp, int RegdNo) {
    FILE *tempFile;
    struct StudentRecord record;

    // Create a temporary file
    tempFile = tmpfile();

    // Copy all records except the one to be deleted to the temporary file
    rewind(fp);
    while (fread(&record, sizeof(struct StudentRecord), 1, fp)) {
        if (record.regdNo != RegdNo) {
            fwrite(&record, sizeof(struct StudentRecord), 1, tempFile);
        }
    }

    // Close the original file and temporary file
    fclose(fp);
    fclose(tempFile);

    // Remove the original file
    remove("studentRecords.dat");

    // Rename the temporary file to the original file name
    rename("temp.dat", "studentRecords.dat");

    printf("Record with registration number %d deleted successfully.\n", RegdNo);
}

// main.c

#include <stdio.h>
#include "studentRecord.h"

int main() {
    FILE *fp;
    int choice, regdNo;
    float newGPA;

    // Open the file in binary append mode
    fp = fopen("studentRecords.dat", "ab+");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    do {
        printf("\nStudent Record System\n");
        printf("1. Insert Record\n");
        printf("2. Display Records\n");
        printf("3. Modify Record\n");
        printf("4. Delete Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertRecord(fp);
                break;
            case 2:
                displayRecords(fp);
                break;
            case 3:
                printf("Enter registration number of student to modify: ");
                scanf("%d", &regdNo);
                printf("Enter new GPA: ");
                scanf("%f", &newGPA);
                modifyRecord(fp, regdNo, newGPA);
                break;
            case 4:
                printf("Enter registration number of student to delete: ");
                scanf("%d", &regdNo);
                deleteRecord(fp, regdNo);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    // Close the file
    fclose(fp);

    return 0;
}

