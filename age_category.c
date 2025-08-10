/* Write a C program to get the category of the entered age.
age >70 - old
age >30 - man or woman
age >5 - boy or girl
age >0 - baby
age <0 - not born yet

Take input as integer and use nested if else

the output should be as follows:

The person is in the age group -  */

#include <stdio.h>
void main()
{
    int age;
    printf("Enter the age of the person: ");
    scanf("%d", &age);
    if (age > 70)
    {
        printf("The person is old");
    }
    else if (age > 30)
    {
        printf("The person is a man or woman");
        }
    else if (age > 0)
    {
        printf("The person is child");
    }
    else if (age < 0)
    {
        printf("Invaild age");
    }

}