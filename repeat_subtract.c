#include <stdio.h>
void main() {
    int dive,divi,sub=0;
    printf("Enter value of n1: ");
    scanf("%d", &dive);
    printf("Enter value of n2: ");
    scanf("%d", &divi);
    for(int i=dive; i>0; i-=divi)
    {
        sub++;
    }
    printf("%d",sub);
}