#include <stdio.h>

int main(void) { // Correct main function signature
    int n, n1 = 0, n2 = 1, nextTerm, i;

    printf("Enter the n th number : ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d ", n1, n2); // Print the first two terms

    for (i = 2; i < n; i++) { // Start from the third term
        nextTerm = n1 + n2;
        printf("%d ", nextTerm);
        n1 = n2;
        n2 = nextTerm;
    }

    printf("\n"); // Add a newline at the end for better formatting
    return 0;
}