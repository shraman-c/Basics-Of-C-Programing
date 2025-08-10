#include <stdio.h>

void findElements(int *arr, int size, int *smallest, int *largest, int *middle) {
    *smallest = arr[0];  // Assume first element is smallest
    *largest = arr[0];   //

    for (int i = 1; i < size; i++) {
        if (arr[i] < *smallest) {
            *smallest = arr[i];  // Update smallest
        }
        if (arr[i] > *largest) {
            *largest = arr[i];   // Update largest
        }
    }
    // Find middle element (handle even size case by choosing lower middle)
    *middle = arr[size / 2];
}
int main(void) {
    int size;
    // Taking array size input
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int arr[size];  // Declare array of user-defined size
    // Taking user input for array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int smallest, largest, middle;
    // Call function with reference
    findElements(arr, size, &smallest, &largest, &middle);
    // Display results
    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);
    printf("Middle indexed element: %d\n", middle);
}
