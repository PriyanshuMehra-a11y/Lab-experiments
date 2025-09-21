#include <stdio.h>
int main() {
    int year, totalDays, i, day;
    printf("Enter a year: ");
    scanf("%d", &year);
    i = 1;
    while (i < year) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            totalDays += 366;
        } else {
            totalDays += 365;
        }
        i++;
    }
    day = totalDays % 7;
    if (day == 0) {
        printf("1st January %d is Monday\n", year);
    } else if (day == 1) {
        printf("1st January %d is Tuesday\n", year);
    } else if (day == 2) {
        printf("1st January %d is Wednesday\n", year);
    } else if (day == 3) {
        printf("1st January %d is Thursday\n", year);
    } else if (day == 4) {
        printf("1st January %d is Friday\n", year);
    } else if (day == 5) {
        printf("1st January %d is Saturday\n", year);
    } else if (day == 6) {
        printf("1st January %d is Sunday\n", year);
    }
}
