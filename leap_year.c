//Write a c program to check whether a year is leap year or Not?
#include <stdio.h>
void main() {
    int year;
    printf("Enter Year:\n");
    scanf("%d",&year);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("This is a leap year.\n");
    }
    else {
        printf("This is not a leap year.\n");
    }
}