#include <stdio.h>
void main() {
    int n1,n2,sum=0;
    printf("Enter value of n1: ");
    scanf("%d", &n1);
    printf("Enter value of n2: ");
    scanf("%d", &n2);
    int i = 1;
    while(i<=n2) {
        sum+=n1;
        i++;
    }

    /*for (int i=1; i<=n2; i++)
    {
            sum+=n1;
    }*/
    printf("%d\n",sum);
}