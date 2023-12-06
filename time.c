#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void addHours(struct Time *t, int additionalHours) {
    t->hours += additionalHours;
}

void addMinutes(struct Time *t, int additionalMinutes) {
    t->minutes += additionalMinutes;
    if (t->minutes >= 60) {
        t->hours += t->minutes / 60;
        t->minutes %= 60;
    }
}

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

struct Time addTime(struct Time t1, struct Time t2) {
    struct Time result;
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + (result.seconds / 60);
    result.hours = t1.hours + t2.hours + (result.minutes / 60);
    result.seconds %= 60;
    result.minutes %= 60;
    return result;
}

struct Time subtractTime(struct Time t1, struct Time t2) {
    struct Time result;
    int totalSeconds1 = t1.seconds + t1.minutes * 60 + t1.hours * 3600;
    int totalSeconds2 = t2.seconds + t2.minutes * 60 + t2.hours * 3600;
    int diffSeconds = totalSeconds1 - totalSeconds2;
    if (diffSeconds < 0)
        diffSeconds = -diffSeconds;
    result.hours = diffSeconds / 3600;
    result.minutes = (diffSeconds % 3600) / 60;
    result.seconds = (diffSeconds % 3600) % 60;
    return result;
}

int main() {
    struct Time time1 = {10, 30, 45};
    struct Time time2 = {2, 15, 20};

    addHours(&time1, 5);
    addMinutes(&time1, 20);
    addSeconds(&time1, 15);

    printf("Updated Time 1: %d hours, %d minutes, %d seconds\n", time1.hours, time1.minutes, time1.seconds);

    struct Time addedTime = addTime(time1, time2);
    printf("Time 1 + Time 2: %d hours, %d minutes, %d seconds\n", addedTime.hours, addedTime.minutes, addedTime.seconds);

    struct Time subtractedTime = subtractTime(time1, time2);
    printf("Time 1 - Time 2: %d hours, %d minutes, %d seconds\n", subtractedTime.hours, subtractedTime.minutes, subtractedTime.seconds);

    return 0;
}
