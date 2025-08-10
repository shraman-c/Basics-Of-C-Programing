#include <stdio.h>
void main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
      if (i%2!=0) {
        printf("%d\n",i);
        }
    }
}