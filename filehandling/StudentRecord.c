#include "studentRecord.h"
#include <stdio.h>

void insertRecord(FILE* fp) {
    struct studentRecord record;
    printf("Enter student name: ");
    scanf("%s", record.name);
    printf("Enter student age: ");
    scanf("%f", &record.age);
    printf("Enter student registration number: ");
    scanf("%d", &record.regdNo);
    printf("Enter student GPA: ");
    scanf("%f", &record.gpa);
    fseek(fp, 0, SEEK_END);
    fwrite(&record, sizeof(struct studentRecord), 1, fp);
}

void displayRecords(FILE* fp) {
    struct studentRecord record;
    rewind(fp);
    while (fread(&record, sizeof(struct studentRecord), 1, fp)) {
        printf("Name: %s\nAge: %.2f\nRegdNo: %d\nGPA: %.2f\n\n", record.name, record.age, record.regdNo, record.gpa);
    }
}

void modifyRecord(FILE* fp, int RegdNo, float newGPA) {
    struct studentRecord record;
    int found = 0;
    rewind(fp);
    while (fread(&record, sizeof(struct studentRecord), 1, fp)) {
        if (record.regdNo == RegdNo) {
            record.gpa = newGPA;
            fseek(fp, -sizeof(struct studentRecord), SEEK_CUR);
            fwrite(&record, sizeof(struct studentRecord), 1, fp);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Record with RegdNo %d not found\n", RegdNo);
    }
}

void deleteRecord(FILE* fp, int RegdNo) {
    struct studentRecord record;
    FILE* tmpFile = tmpfile();
    rewind(fp);
    while (fread(&record, sizeof(struct studentRecord), 1, fp)) {
        if (record.regdNo != RegdNo) {
            fwrite(&record, sizeof(struct studentRecord), 1, tmpFile);
        }
    }
    fclose(fp);
    remove("student_records.dat");
    rename(tmpFile, "student_records.dat");
    fp = fopen("student_records.dat", "rb+");
    fclose(tmpFile);
}

