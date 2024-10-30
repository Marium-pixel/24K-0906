#include <stdio.h>

int main() {
    int start, n;
    printf("Enter the starting number for array");
     scanf("%d", &start);
    printf("Enter the number of pairs in each array ");//num of rows as 'pairs'
    scanf("%d", &n);
int array[2][n][2]; 
    int Even = start%2 == 0? start:start - 1;
    int Odd = start%2 == 1? start:start - 1;
    int i,j;
//n is taken as the number of rows because thats what [2][n][2] meant but i was confused between taking n as the 3d element or rows this code is based on n as rows
    for (i=0; i<n; i++){
        for ( j=0; j< 2; j++){
            array[0][i][j] =Even;
            Even-=2;  
            array[1][i][j] =Odd;
          Odd-=2;  
        }
    }
    printf("\n even numb array [2][%d][2]:\n",n);//n is different as taken as input
    for (i=0;i<n; i++){
        printf("[");
        for (j=0;j<2;j++){
            printf("%d ", array[0][i][j]);
        }
        printf("]\n");
    }
printf("\n odd num array [2][%d][2]: \n", n);
    for (i =0;i < n;i++){
        printf("[ ");
        for ( j = 0; j < 2; j++) {
            printf("%d ", array[1][i][j]);
        }
        printf("]\n");
    }

    return 0;
}
