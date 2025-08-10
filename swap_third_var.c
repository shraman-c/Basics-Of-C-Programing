#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c,avg;
    printf("Enter the 1st no. ");
    scanf("%d",&a);
    printf("\n Enter the 2nd no. ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("\n the swapped numbers are %d %d",a,b);

}