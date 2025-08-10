#include <stdio.h>

int main() {
    int a = 10, b = 3;

    // Using % operator
    printf("a %% b = %d\n", a % b);

    // Using == operator
    if (a % 2 == 0) {
        printf("a is even.\n");
    }

    // Using < and >= operators
    if (b < a && a >= 10) {
        printf("b is less than a and a is greater than or equal to 10.\n");
    }

    // Using <= and != operators
    if (b <= a && a != b) {
        printf("b is less than or equal to a and a is not equal to b.\n");
    }

    // Using || operator
    if (a > 5 || b > 5) {
        printf("Either a or b is greater than 5.\n");
    }

    // Using && operator
    if (a > 5 && b < 5) {
        printf("a is greater than 5 and b is less than 5.\n");
    }

    return 0;
}