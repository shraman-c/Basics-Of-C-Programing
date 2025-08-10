/* WACP to make a 6function caluclator using switch case
1-Addition, 2-Subtraction, 3-Multiplication, 4-Division, 5-power, 6-Square root
*/
#include <stdio.h>
#include <math.h>
void main() {
    int choice;6
    double num1, num2, result;
    printf("press \n 1-Addition, \n 2-Subtraction, \n 3-Multiplication, \n 4-Division, \n 5-power, \n 6-Square root");
    printf("\n Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);
            result = num1 + num2;
        printf("Addition of %lf and %lf is %lf\n", num1, num2, result);
        break;
        case 2:
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            result = num1 - num2;
            printf("Subtraction of %lf and %lf is %lf\n", num1, num2, result);
        break;
        case 3:
            printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);
            result = num1 * num2;
        printf("Multiplication of %lf and %lf is %lf\n", num1, num2, result);
        break;
        case 4:
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            result = num1 / num2;
        printf("Division of %lf and %lf is %lf\n", num1, num2, result);

        result = num2 / num1;
        printf("Division of %lf and %lf is %lf\n", num2, num1, result);
        break;
        case 5:
            printf("Enter base number: ");
        scanf("%lf", &num1);
        printf("Enter power number: ");
        scanf("%lf", &num2);
            result = pow(num1, num2);
        printf("Power of %lf and %lf is %lf\n", num1, num2, result);
        break;
        case 6:
            printf("Enter the number: ");
        scanf("%lf", &num1);
            result = sqrt(num1);
        printf("Square root of %lf is %lf\n", num1, result);
        break;
        default:
            printf("Invalid input\n");
    }
}