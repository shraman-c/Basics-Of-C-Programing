//helloworld
#include <stdio.h>
void main()
{
    printf("Hello, World!");
    int a = 10;
    int b = 20;
    int c = a;
    a = b;
    b=c;
    printf ("\n with using 3rd variable %d %d" ,a,b);
    //without using 3rd variable
a = a + b;
b = a - b;
a = a - b;
printf ("\v without using 3rd variable %d %d" ,a,b);

if (a > b)
printf("\n %d is greater than %d", a, b);

else
printf("\n %d is smaller than %d", a, b);

//eligibility to vote
int age = 25;
if (age >= 18)
printf("\n Eligible to vote");
else
printf("\n Not Eligible to vote");

//check the greater of 2 variables
int x = 100;
int y = 20;
if (x > y)
printf("\n %d is greater than 😊 %d", x, y);




}