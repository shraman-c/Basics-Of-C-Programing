/* 10. Write a C program that displays the n terms of square natural numbers and their sum.
1 4 9 16 ... n Terms
Test Data :
Input the number of terms : 5
Expected Output :
The square natural upto 5 terms are :1 4 9 16 25
The Sum of Square Natural Number upto 5 terms = 55
*/

#include <stdio.h>
#include <math.h>
void main()
{
    int n,sum=0,m;
    printf("Input the number or terms : ");
    scanf("%d", &n);

    for(int i = 1; i<=n;i++){
        m=pow(i,2);
        sum+=m;
        printf("%d ",m);
    }
    printf("\n The sum of the series is %d",sum);
}