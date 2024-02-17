#include "studentRecord.h"
#include <stdio.h>

int main() {
    FILE* fp;
    fp = fopen("student_records.dat", "ab+");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    int choice, regdNo;
    float gpa;
    while (1) {
        printf("\nStudent Record System Menu\n");
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
                printf("Enter registration number of student to modify GPA: ");
                scanf("%d", &regdNo);
                printf("Enter new GPA: ");
                scanf("%f", &gpa);
                modifyRecord(fp, regdNo, gpa);
                break;
            case 4:
                printf("Enter registration number of student to delete record: ");
                scanf("%d", &regdNo);
                deleteRecord(fp, regdNo);
                break;
            case 5:
                fclose(fp);
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
