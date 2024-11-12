#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

void sortStrings(char arr[][MAX_LENGTH], int n) {
    char temp[MAX_LENGTH];

    // Bubble sort based on the first character's ASCII value
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j][0] > arr[j + 1][0]) {
                // Swap the strings
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    char strings[MAX_STRINGS][MAX_LENGTH];
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); // To consume the newline character left in the buffer

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(strings[i], MAX_LENGTH, stdin);
        // Remove the newline character if present
        strings[i][strcspn(strings[i], "\n")] = 0;
    }

    sortStrings(strings, n);

    printf("\nSorted strings based on the first character's ASCII value:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
