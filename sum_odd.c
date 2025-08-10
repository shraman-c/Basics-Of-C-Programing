#include <stdio.h>
void main() {
    int n,sum=0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        if (i%2!=0) {
            sum = sum + i;

        }
    }
    printf("%d\n",sum);
}