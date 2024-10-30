#include <stdio.h>
int main() {
    char arr[5][105] = {};  
    int i = 4, j = 0, up=1,x=1, count = 0;
    while (count < 3) {
        arr[i][j] = '*';
        up ? (i--, j +=x++) : (i++, j +=x--);
        if (i == 0 && up) {
            up = 0;
            x--;
        } else if (i == 4 && !up) {
            up = 1;
            x = 1;
            count++;
            arr[i][j] = '*';
            j += 2;
            if (count < 3) arr[i][j] = '*';
        }
    }
    i = 0;
    while (i < 5) {               
        j = 0;
        while (j < 105) {        
            printf("%c", arr[i][j] ? '*' : ' ');
            j++;
        }
        printf("\n");
        i++;
    }
  return 0;
}
