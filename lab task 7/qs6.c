#include <stdio.h>

int main() {
    int arr[10];
    int freq[10]; // Array to store frequency of each element
    int i, j;
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array with -1 to mark unprocessed elements
    }
    for (i = 0; i < 10; i++) {
        int count = 1;
        if (freq[i] == 0) { // Skip already counted elements
            continue;
        }
        for (j = i + 1; j < 10; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Mark this element as counted
            }
        }
        freq[i] = count; // Store count in freq array
    }
    printf("Element | Frequency\n");
    for (i = 0; i < 10; i++) {
        if (freq[i] != 0) {
            printf("%d       | %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
