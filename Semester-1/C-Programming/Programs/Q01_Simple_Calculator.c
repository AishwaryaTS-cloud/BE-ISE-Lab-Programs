// Simulation of a Simple Calculator.

#include <stdio.h>

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return b != 0 ? a / b : 0; }

int main() {
    float num1, num2, result;
    char op;

    printf("---- Simple Calculator ----\n");
    printf("Enter expression (a + b) / (a - b) / (a * b) / (a / b):\n");
    scanf("%f %c %f", &num1, &op, &num2);

    switch(op) {
        case '+':
            result = add(num1, num2);
            printf("Result = %.2f\n", result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("Result = %.2f\n", result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("Result = %.2f\n", result);
            break;
        case '/':
            if(num2 == 0)
                printf("Error: Division by zero is not allowed.\n");
            else {
                result = divide(num1, num2);
                printf("Result = %.2f\n", result);
            }
            break;
        default:
            printf("Invalid operator! Use +, -, * or /.\n");
    }

    return 0;
}

/* 
Sample Input/Output:
---- Simple Calculator ----
Enter expression: 5 * 8
Result = 40.00 
*/