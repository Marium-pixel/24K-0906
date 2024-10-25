#include <stdio.h>

int main() {
    char str[100];  
    char *ptr = str;
    int length = 0;

   
    printf("Enter a string: ");

 
    while (1) {
        char abc = getchar();
        if (abc == '\n' || length >= 99) { 
            *ptr = '\0';  // 
            break;
        }
        *ptr = abc;   
        ptr++;
        length++;
    }

 
    printf("Length of the string: %d\n", length);

 
    char *start = str;
    char *end = str + length - 1;
    char temp;

    while (start < end) {
 
        temp = *start;
        *start = *end;
        *end = temp;

 
        start++;
        end--;
    }

    
    printf("Reversed string: %s\n", str);

    return 0;
}
