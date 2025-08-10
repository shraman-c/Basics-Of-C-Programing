/* WACP to print month name form the month number - using switch case
1-january
2-february
3-march
4-april
5-may
6-june
7-july
8-august
9-september
10-october
11-november
12-december
*/


#include <stdio.h>
int main() {
    int month;
    printf("Enter month number: ");
    scanf("%d", &month);
    switch (month) {
        case 1:
            printf("January\n\n");

        case 2:
            printf("February\n\n");

        case 3:
            printf("March\n\n");

        case 4:
            printf("April\n\n");

        case 5:
            printf("May\n\n");

        case 6:
            printf("June\n\n");

        case 7:
            printf("July\n\n");

        case 8:
            printf("August\n\n");

        case 9:
            printf("September\n\n");

        case 10:
            printf("October\n\n");

        case 11:
            printf("November\n\n");

        case 12:
            printf("December\n\n");
            break;
        default:
            printf("Invalid month number\n\n");
    }
    return 0;
}