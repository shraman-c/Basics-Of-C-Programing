/* Write a C program to get the gradation of the average marks of subjects. The program should take the average marks as input and display the grade as output. The grading system is as follows:
avg >90 - 1st
avg >80 - 2nd
avg >70 - 3rd
avg >60 - pass
avg <60 - fail 

Take input as integer and use nested if else

the output should be as follows:

ENTER THE SUBJECT MARKS OF mATHS:
ENTER THE SUBJECT MARKS OF PHYSICS:
ENTER THE SUBJECT MARKS OF chEMISTRY:
ENTER THE SUBJECT MARKS OF ENGLISH:
ENTER THE SUBJECT MARKS OF COMPUTER: */

#include <stdio.h>
void main() 
{
    int m, p, c,e, c1, avg;
    printf("ENTER THE SUBJECT MARKS OF maths:\n");
    scanf("%d", &m);
    printf("ENTER THE SUBJECT MARKS OF physics:\n");
    scanf("%d", &p);
    printf("ENTER THE SUBJECT MARKS OF chemistry:\n");
    scanf("%d", &c);
    printf("ENTER THE SUBJECT MARKS OF english:\n");
    scanf("%d", &e);
    printf("ENTER THE SUBJECT MARKS OF computer:\n");
    scanf("%d", &c1);
    avg = (m + p + c + e + c1) / 5;
    if (avg <0)
    {
        printf("The Average cannot be zero.\n");
    }
    
    if (avg > 60) 
                {
                    printf("PASS\n");
                } 
    else 
        {
             printf("FAIL\n");
         }
    
     if (avg > 90) 
    {
        printf("1st\n");
    } 
    else if (avg > 80) 
    {
        printf("2nd\n");
    } 
    else if (avg > 70) 
    {
        printf("3rd\n");
    }
 }