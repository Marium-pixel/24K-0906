#include <stdio.h>

int findDuplicate(int arr[], int size) {
    int count[size]; // Auxiliary array to track occurrences

    for (int i = 0; i < size; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < size; i++) {
        if (count[arr[i]] == 1) { // Duplicate found
            return arr[i];
        }
        count[arr[i]]++;
    }

    return -1; // No duplicates found
}

int main() {
    int arr[] = {1, 2, 3, 2, 5}; // Input array
    int size = sizeof(arr) / sizeof(arr[0]);

    int duplicate = findDuplicate(arr, size);

    if (duplicate != -1) {
        printf("Number %d occurs more than once.\n", duplicate);
    } else {
        printf("No duplicates found.\n");
    }

    return 0;
}
