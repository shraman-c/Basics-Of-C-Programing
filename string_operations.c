#include <stdio.h>
#include <string.h>
void main()
{
    char s1[100],s2[100],s3[100];
    //Print your name using string
    printf("Enter your name\n");
    gets(s1);
    printf("Your name is ");
    puts(s1);
    //copy a string to another
    strcpy(s2,s1);
    printf("The copied string is %s\n",s2);
    //Reverse, Uppercase, lowercase length of string
    printf("The reverse of your name is %s\n",strrev(s1));
    strrev(s1);
    printf("The uppercase of your name is %s\n",strupr(s1));
    printf("The lowercase of your name is %s\n",strlwr(s1));
    printf("The length of your name is %d\n",strlen(s1));

    //copy and concatenate between 2 strings
    printf("Enter your surname\n");
    gets(s3);
    strcat(s2,s3);
    printf("The concatenated string is %s\n",s2);
}