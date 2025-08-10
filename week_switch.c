/* WACP to print day of week form the day number - using switch case
1-sunday
2-monday
3-tuesday
4-wednesday
5-thursday
6-friday
7-saturday
*/


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
    int day;
    printf("Enter day number: ");
    scanf("%d", &day);
    switch (day) {
        case 1:
            printf("Sunday");
        break;
        case 2:
            printf("Monday");
        break;
        case 3:
            printf("tuesday");
        break;
        case 4:
            printf("wednesday");
        break;
        case 5:
            printf("thursday");
        break;
        case 6:
            printf("friday");
        break;
        case 7:
            printf("saturday");
        break;
        default:
            printf("Invalid day number");
    }
    return 0;
}