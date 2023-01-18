#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;
    char operation;
    double result;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter an operation (+, -, *, /, ^): ");
    scanf(" %c", &operation);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '^':
            result = pow(num1, num2);
            break;
        default:
            printf("Invalid operator");
    }

    printf("Result: %.2lf", result);

    return 0;
}
