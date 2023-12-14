#include <stdio.h>

//structure for time
struct Time {
    int hours;
    int minutes;
    int seconds;
};
// to add hours
void addHours(struct Time *t, int additionalHours) {
    t->hours += additionalHours;
}

//to add minutes
void addMinutes(struct Time *t, int additionalMinutes) {
    t->minutes += additionalMinutes;
    if (t->minutes >= 60) {
        t->hours += t->minutes / 60;
        t->minutes %= 60;
    }
}


//to add seconds
void addSeconds(struct Time *t, int additionalSeconds) {
    t->seconds += additionalSeconds;
    if (t->seconds >= 60) {
        t->minutes += t->seconds / 60;
        t->seconds %= 60;
        if (t->minutes >= 60) {
            t->hours += t->minutes / 60;
            t->minutes %= 60;
        }
    }
}


// Adding time
struct Time addTime(struct Time t1, struct Time t2) {
    struct Time result; //Result
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + (result.seconds / 60); //adding the excess 60 seconds to minutes
    result.hours = t1.hours + t2.hours + (result.minutes / 60); //adding the excess 60 minutes to hours
    result.seconds %= 60; // modulus of 60 seconds
    result.minutes %= 60; // modulus of 60 minutes
    return result;
}

struct Time subtractTime(struct Time t1, struct Time t2) { //caluculate the absolute time difference
    struct Time result;
//  Total seconds of two time structures
    int totalSeconds1 = t1.seconds + t1.minutes * 60 + t1.hours * 3600; 
    int totalSeconds2 = t2.seconds + t2.minutes * 60 + t2.hours * 3600;

//Difference
    int diffSeconds = totalSeconds1 - totalSeconds2; 
// we can also use the absolute
//if negative
    if (diffSeconds < 0)
        diffSeconds = -diffSeconds;
    result.hours = diffSeconds / 3600;
    result.minutes = (diffSeconds % 3600) / 60;
    result.seconds = (diffSeconds % 3600) % 60;
    return result;
}

int main() {

    struct Time time1 ;
    struct Time time2 ;
    
    printf("Enter time1 (hours minutes seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    printf("Enter time2 (hours minutes seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);


//Functions to add hours,minutes,seconds

    addHours(&time1,12);
    addMinutes(&time1,56);
    addSeconds(&time1,23);
    
    printf("added time=%d hours,%d minutes,%d seconds\n",time1.hours,time1.minutes,time1.seconds);



    struct Time addedTime = addTime(time1, time2);
    printf("Time 1 + Time 2: %d hours, %d minutes, %d seconds\n", addedTime.hours, addedTime.minutes, addedTime.seconds);

    struct Time subtractedTime = subtractTime(time1, time2);
    printf("Time 1 - Time 2: %d hours, %d minutes, %d seconds\n", subtractedTime.hours, subtractedTime.minutes, subtractedTime.seconds);


//time multiplication is not there in our dimension
    return 0;
}
