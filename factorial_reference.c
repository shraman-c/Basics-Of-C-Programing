//Find factorial using Call by reference
#include <stdio.h>
void factorial(int *n)
{
   int a=1;
   for(int i=1;i<=*n;i++)
     a*=i;

    printf("%d",a);
}
void main(){
int n;
    printf("Enter a number:");
scanf("%d",&n);
factorial(&n);
}