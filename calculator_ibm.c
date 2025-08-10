#include <stdio.h>
#include <math.h>
void main()
{
    printf("\t Calculator \n Designed by IBM \n");
    int a,b,c,avg;
    printf("Enter the 1st no. ");
    scanf("%d",&a);
    printf("Enter the 2nd no. ");
    scanf("%d",&b);
    printf("Enter the 3rd no. ");
    scanf("%d",&c);

    printf("\n Addition of 1st and 3rd no.: %d",(a+c));
    printf("\n Average of 3 no.s: %d",((a+b+c)/3));
    printf("\n Multiplication of 3 no.s: %d",(a*b*c));
    printf("\n Square root of 2nd no: %f",(sqrt(b)));
    printf("\n power 2 of 3rd no: %f",(pow(b,2)));
    printf("\n \t Thank You");
}