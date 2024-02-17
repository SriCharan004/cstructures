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
