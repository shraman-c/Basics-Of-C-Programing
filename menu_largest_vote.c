/* make a menu driven system using nested if-else to
press 1 to find lagrest of 2 numbers
press 2 to check the eligible to vote
press 3 to print "Thank You Visit again" */

#include <stdio.h>
void main()
{
    int choice;
    printf("press 1 to find largest of 2 numbers\n");
    printf("press 2 to check the eligible to code\n");
    printf("press 3 to print Thank You Visit again\n");
    scanf("%d",&choice);
    if (choice==1)
    {
        int a,b;
        printf("Enter the first number\n");
        scanf("%d",&a);
        printf("Enter the second number\n");
        scanf("%d",&b);
        if (a>b)
        printf("%d is the largest number\n",a);
        else
        printf("%d is the largest number\n",b);
    }

    else if (choice==2)
    {
        int age;
        printf("Enter the age\n");
        scanf("%d",&age);
        if (age>=18 && age<=85)
        printf("You are eligible to vote\n");
        else
        printf("You are not eligible to vote\n");
    }

    else if (choice==3)
    {
        printf("Thank You Visit again\n");
    }
    else
    {
        printf("Invalid choice\n");
    }
}
