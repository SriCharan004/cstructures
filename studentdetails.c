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


//calculates the average cgpa
float calculateAvgCGPA(struct Student students[], int count) {
    float totalCGPA = 0;
    float avgCGPA;
    for (int i = 0; i < count; i++) {
        totalCGPA += students[i].cgpa;
    }
    if (count > 0) { // the number of subjects should be greater than 0
    avgCGPA = totalCGPA / count;
    } else 
    {
        avgCGPA = 0;
    }
return avgCGPA;
}


//prints details of students above average cgpa
void displayAboveAvgCGPA(struct Student students[], int count) {
    float avgCGPA = calculateAvgCGPA(students, count); //calculates the average gpa
    printf("Students with CGPA greater than the average CGPA (%.2f):\n", avgCGPA);
    for (int i = 0; i < count; ++i) { //condition
        if (students[i].cgpa > avgCGPA) {
            printf("Regd No: %d, Name: %s, CGPA: %.2f\n", students[i].regdno, students[i].name, students[i].cgpa);
        }
    }
}

//prints details as per given Reg Num
void printStudentDetailsByRegdNo(struct Student students[], int count, int regdNo) {
    for (int i = 0; i < count; ++i) {
        if (students[i].regdno == regdNo) {
            printf("Student Details for Regd No %d:\n", regdNo);
            printf("Name: %s, CGPA: %.2f, Gender: %c\n", students[i].name, students[i].cgpa, students[i].gender);
            return;
        }
    }
}

//prints details as per given year
void printStudentsByYearOfJoining(struct Student students[], int count, int year) {
    printf("Students joined in year %d:\n", year);
    for (int i = 0; i < count; ++i) {
        if (students[i].yoj.year == year) {
            printf("Regd No: %d, Name: %s, CGPA: %.2f\n", students[i].regdno, students[i].name, students[i].cgpa);
        }
    }
}

//prints details as per given gender
void printStudentsByGender(struct Student students[], int count, char gender) {
    printf("Students with gender '%c':\n", gender);
    for (int i = 0; i < count; ++i) {
        if (students[i].gender == gender) {
            printf("Regd No: %d, Name: %s, CGPA: %.2f\n", students[i].regdno, students[i].name, students[i].cgpa);
        }
    }
}




void printStudentsInIncreasingCGPAOrder(struct Student students[], int count) {
    // Bubble sort to sort students by increasing CGPA
    int i, j;
    struct Student temp;

    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            if (students[j].cgpa > students[j + 1].cgpa) {
                // Swap elements if they are in the wrong order
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

//printing the sorted data
    printf("Students in increasing order of CGPA:\n");
    for (i = 0; i < count; ++i) {
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
