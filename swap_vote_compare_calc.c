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
printf("\n %d is greater than %d", x, y);

//calculator in c
int num1 = 400;
int num2 = 20;
int sum = num1 + num2;
int sub = num1 - num2;
int mul = num1 * num2;
int div = num1 / num2;
int mod = num1 % num2;
printf("\n Sum = %d", sum);
printf("\n Sub = %d", sub);
printf("\n multiply = %d", mul);
printf("\n divide = %d", div);
printf("\n modulus = %d", mod);


//find +ve and -ve integer

int num = -10;
if (num > 0)
printf("\n %d is +ve integer", num);
else
printf("\n %d is -ve integer", num);





}