#include <stdio.h>

// Function to print even-valued elements in the array
void printEvenElements(int arr[], int size) {
    printf("Even-valued elements: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

// Function to print odd-valued elements in the array
void printOddElements(int arr[], int size) {
    printf("Odd-valued elements: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int size;

    // Input from user: array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Array size must be a positive integer.\n");
        return 1; // Return an error code
    }

    int arr[size];

    // Input from user: array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Call functions to print even and odd elements
    printEvenElements(arr, size);
    printOddElements(arr, size);

    return 0; // Return success code
}
