#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter the value of n for 1 + (3/2^2) + ... + (n+2)/n^2: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (float)(i + 2) / (i * i); // Type cast (float) is crucial
    }

    printf("Sum of 1 + (3/2^2) + ... + (%d+2)/%d^2 = %f\n", n, n, sum);
    return 0;
}

