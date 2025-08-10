/*12. Write a C program to check whether a given number is an Armstrong number or not.
Test Data :
Input a number: 153
Expected Output :
153 is an Armstrong number.
*/

#include <stdio.h>
#include <math.h>
void main()
{
    int num, rem, sum = 0,count=0,temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        //rem = num % 10;
        //sum = sum + rem;
        num = num / 10;
        count++;
    }
    num = temp;
    while (num != 0)
    {
        rem = num % 10;
        sum+=pow(rem,count);
        num = num / 10;
    }

    if (sum == temp)
        printf("%d is an Armstrong number", temp);
    else
        printf("%d is not an Armstrong number", temp);
}