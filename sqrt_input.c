#include <stdio.h>
#include <math.h>

int main() {
    int intNum;
    float floatNum;

    // Taking integer input
    printf("Enter an integer: ");
    scanf("%d", &intNum);

    // Taking floating-point input
    printf("Enter a floating-point number: ");
    scanf("%f", &floatNum);

    // Calculating square root
    printf("Square root of %d: %f\n", intNum, sqrt(intNum));
    printf("Square root of %.2f: %f\n", floatNum, sqrt(floatNum));

    return 0;
}