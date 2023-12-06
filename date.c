#include <stdio.h>

struct Date 
{
    int day;
    int month;
    int year;
};

int isLeapYear(int year) 
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

struct Date calculateTomorrow(struct Date currentDate) 
{
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    currentDate.day++;

    if (currentDate.month == 2 && isLeapYear(currentDate.year)) {
        daysInMonth[2] = 29;
    }

    if (currentDate.day > daysInMonth[currentDate.month]) {
        currentDate.day = 1;
        currentDate.month++;

        if (currentDate.month > 12) {
            currentDate.month = 1;
            currentDate.year++;
        }
    }

    return currentDate;
}

int main() 
{
    struct Date today, tomorrow;

    printf("Enter today's date (dd mm yyyy): ");
    scanf("%d %d %d", &today.day, &today.month, &today.year);

    tomorrow = calculateTomorrow(today);

    printf("Tomorrow's date is: %02d-%02d-%d\n", tomorrow.day, tomorrow.month, tomorrow.year);

    return 0;
}
