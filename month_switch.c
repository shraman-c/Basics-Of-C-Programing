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
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("Invalid month number");
    }
    return 0;
}