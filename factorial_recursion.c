#include<stdio.h>
int fact(int a);
int fact(int a)
{
    if(a==1)
        return 1;
    return a*fact(a-1);
}
void main()
{
    int n=5;
    printf("%d is the Factorial of %d",fact(n),n);
}