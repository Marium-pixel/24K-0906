#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j, k;
    int saddle= 0;
    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        int rowMin = arr[i][0];
        int colIndex = 0;

        for (j = 1; j < 3; j++) {
            if (arr[i][j] < rowMin) {
                rowMin = arr[i][j];
                colIndex = j;
            }
        }

        int SaddlePoint = 1;
        for (k = 0; k < 3; k++) {
            if (arr[k][colIndex] > rowMin) {
                SaddlePoint = 0;
                break;
            }
        }

        if (SaddlePoint) {
            printf("Saddle point found at [%d][%d]: %d\n", i, colIndex, rowMin);
            saddle= 1;
        }
    }

    if (!saddle) {
        printf("No saddle points found in the matrix.\n");
    }

    return 0;
}
