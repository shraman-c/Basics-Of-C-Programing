#include <stdio.h>

int main() {
    int limit, num, i;
    printf("Enter the limit - ");
    scanf("%d", &limit);

    printf("Enter %d numbers:\n", limit);

    printf("Even numbers are - ");
    for (i = 0; i < limit; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            printf("%d", num);
            if (i < limit - 1) {
                printf(", ");
            }
        }
    }
    printf("\n");

    return 0;
}
