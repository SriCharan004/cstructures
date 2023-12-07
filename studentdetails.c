#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int regdno;
    float cgpa;
    char grade;
    char name[50];
    char gender;
    struct Date dob;
    struct Date yoj;
};

float calculateAvgCGPA(struct Student students[], int count) {
    float totalCGPA = 0;
    for (int i = 0; i < count; ++i) {
        totalCGPA += students[i].cgpa;
    }
    return (count > 0) ? (totalCGPA / count) : 0;
}

void displayAboveAvgCGPA(struct Student students[], int count) {
    float avgCGPA = calculateAvgCGPA(students, count);
    printf("Students with CGPA greater than the average CGPA (%.2f):\n", avgCGPA);
    for (int i = 0; i < count; ++i) {
        if (students[i].cgpa > avgCGPA) {
            printf("Regd No: %d, Name: %s, CGPA: %.2f\n", students[i].regdno, students[i].name, students[i].cgpa);
        }
    }
}

void printStudentDetailsByRegdNo(struct Student students[], int count, int regdNo) {
    for (int i = 0; i < count; ++i) {
        if (students[i].regdno == regdNo) {
            printf("Student Details for Regd No %d:\n", regdNo);
            printf("Name: %s, CGPA: %.2f, Gender: %c\n", students[i].name, students[i].cgpa, students[i].gender);
            return;
        }
    }
    printf("No student found with Regd No %d\n", regdNo);
}

void printStudentsByYearOfJoining(struct Student students[], int count, int year) {
    printf("Students joined in year %d:\n", year);
    for (int i = 0; i < count; ++i) {
        if (students[i].yoj.year == year) {
            printf("Regd No: %d, Name: %s, CGPA: %.2f\n", students[i].regdno, students[i].name, students[i].cgpa);
        }
    }
}

void printStudentsByGender(struct Student students[], int count, char gender) {
    printf("Students with gender '%c':\n", gender);
    for (int i = 0; i < count; ++i) {
        if (students[i].gender == gender) {
            printf("Regd No: %d, Name: %s, CGPA: %.2f\n", students[i].regdno, students[i].name, students[i].cgpa);
        }
    }
}

int compareCGPA(const void *a, const void *b) {
    struct Student *studentA = (struct Student *)a;
    struct Student *studentB = (struct Student *)b;
    return (studentA->cgpa - studentB->cgpa);
}

void printStudentsInIncreasingCGPAOrder(struct Student students[], int count) {
    qsort(students, count, sizeof(struct Student), compareCGPA);
    printf("Students in increasing order of CGPA:\n");
    for (int i = 0; i < count; ++i) {
        printf("Regd No: %d, Name: %s, CGPA: %.2f\n", students[i].regdno, students[i].name, students[i].cgpa);
    }
}

int main() {
    struct Student students[5] = 
    {
        {211214, 8.3, 'A', "Apple", 'F', {10, 5, 2000}, {2019, 7, 15}},
        {211215, 8.5, 'A', "Banana", 'M', {5, 8, 2001}, {2018, 6, 20}},
        {211216, 8.5, 'A', "Carrot", 'M', {15, 12, 1999}, {2019, 7, 15}},
        {211217, 7.5, 'B', "Date", 'F', {20, 9, 2000}, {2018, 6, 20}},
        {211218, 8.2, 'A', "Eggplant", 'F', {3, 4, 1998}, {2020, 8, 10}}
    };
    int numOfStudents = 5;

    displayAboveAvgCGPA(students, numOfStudents);

    printStudentDetailsByRegdNo(students, numOfStudents, 103);

    printStudentsByYearOfJoining(students, numOfStudents, 2019);

    printStudentsByGender(students, numOfStudents, 'F');

    printStudentsInIncreasingCGPAOrder(students, numOfStudents);

    return 0;
}
