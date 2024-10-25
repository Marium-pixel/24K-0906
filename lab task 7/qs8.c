#include <stdio.h>
#include <ctype.h>

int main() {
    char expression[100];
    int result = 0;
    int current_number = 0;
    char current_operator = '+';
    int valid_expression = 1; 
    printf("Enter an expression (e.g., 20+10-30): ");
    scanf("%s", expression);

    // Traverse the expression array
    for (int i = 0; expression[i] != '\0'; i++) {
        if (isdigit(expression[i])) {
            // Build the current number from consecutive digits
            current_number = current_number * 10 + (expression[i] - '0');
        } else if (expression[i] == '+' || expression[i] == '-') {
            // Perform the previous operation
            if (current_operator == '+') {
                result += current_number;
            } else if (current_operator == '-') {
                result -= current_number;
            }
            current_operator = expression[i];
            current_number = 0;
            if (expression[i + 1] == '\0' || expression[i + 1] == '+' || expression[i + 1] == '-') {
                valid_expression = 0;
                break;
            }
        } else {

            valid_expression = 0;
            break;
        }
    }

    // Perform the last pending operation
    if (current_operator == '+') {
        result += current_number;
    } else if (current_operator == '-') {
        result -= current_number;
    }

    // Chec
