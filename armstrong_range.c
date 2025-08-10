/*Write a C program to find the Armstrong number for a given range of number.
Test Data :
Input starting number of range: 1
Input ending number of range : 1000
Expected Output :
Armstrong numbers in given range are: 1 153 370 371 407*/

#include <stdio.h>
#include <math.h>
void main()
{
    int n,rem, sum = 0,count=0;
    int temp;
    printf("Enter a n: ");
    scanf("%d", &n);
    for (int num = 1; num <= n; num++){
        count=0;
        temp = num;
        while (num != 0)
        {
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
            printf("%d\t",temp);
    }
}
}\