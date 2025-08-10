//1. wacp to take a character as input and print it as either vowel or consonant 

#include <stdio.h>
void main()
{
    char ch;
    printf("Enter a Character:");
    scanf("%c",&ch);
    if(ch=="a"||ch=="e"||ch=="i"||ch=="o"||ch=="u"||ch=="A"||ch=="E"||ch=="I"||ch=="O"||ch=="U")
    {
        printf("the entered character is a Vowel");
    }
    else
    printf("the entered character is a consonant")
}