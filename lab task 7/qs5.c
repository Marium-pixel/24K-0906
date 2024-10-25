#include <stdio.h>

int main() {
    char str[100]; 
    int length = 0;
    int is_palindrome = 1;  
    printf("Enter a string: ");
    while (1) {
        char ch = getchar();
        if (ch == '\n' || length >= 99) {  
            str[length] = '\0'; // Add null terminator
            break;
        }
        str[length] = ch;
        length++;
    }
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            is_palindrome = 0; // Not a palindrome
            break;
        }
    }
    if (is_palindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
