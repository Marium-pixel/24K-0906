 #include <stdio.h>

// Recursive function to print elements of an array
void printArray(int arr[], int size) {
    // Base case: if size is 0, return
    if (size == 0) {
        return;
    }

    // Print the first element of the array
    printf("%d ", arr[0]);

    // Recursive call to print the rest of the array
    printArray(arr + 1, size - 1);
}

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of the given size
    int arr[size];

    // Get the elements of the array from the user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the recursive function to print array elements
    printf("Array elements: ");
    printArray(arr, size); // Recursive function call
    printf("\n");

    return 0;
}
