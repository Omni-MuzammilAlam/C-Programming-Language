#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5; // Number of elements in the array
    int pos;

    // Display the original array
    printf("Original array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Input the position to delete
    printf("Enter the position to delete (0 to 4): ");
    scanf("%d", &pos);

    // Check if the position is valid
    if(pos < 1 || pos > n) {
        printf("Invalid position! Please enter a position between 0 and 4.\n");
    } else {
        // Adjust the position to match array index (0-based index)
        pos--;

        // Shift elements to the left
        for(int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Decrease the size of the array
        n--;

        // Display the array after deletion
        printf("Array after deletion: ");
        for(int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
