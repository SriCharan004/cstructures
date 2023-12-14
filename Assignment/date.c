#include <stdio.h>

struct Date 
{
    int day;
    int month;
    int year;
};

int isLeapYear(int year) 
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)); // formula for leap year
}

struct Date calculateTomorrow(struct Date currentDate) 
{
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    currentDate.day++; // add the day

    if (currentDate.month == 2 && isLeapYear(currentDate.year)) {
        daysInMonth[2] = 29; //only if it is leap year, change the number in daysInMonth[]
    }

    if (currentDate.day > daysInMonth[currentDate.month]) { // if we are exceeding the given days
        currentDate.day = 1; // we are entering into a new month
        currentDate.month++; // adding the month

        if (currentDate.month > 12) { // if we are in december we have to move to Jan in next year
            currentDate.month = 1;
            currentDate.year++;
        }
    }

    return currentDate; //gives the pointer
}

int main() 
{
    struct Date today, tomorrow;

    printf("Enter today's date (dd mm yyyy): ");
    scanf("%d %d %d", &today.day, &today.month, &today.year);

    tomorrow = calculateTomorrow(today);

    printf("Tomorrow's date is: %02d-%02d-%d\n", tomorrow.day, tomorrow.month, tomorrow.year); //format

    return 0;
}
