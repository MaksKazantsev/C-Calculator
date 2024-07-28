#include <stdio.h>
#include <string.h>

int main(void) {
    char operator;
    double num1, num2;
    char continueCalc;

    do {
        printf("Enter the first number: ");
        scanf("%lf", &num1);

        printf("Choose a math operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter the second number: ");
        scanf("%lf", &num2);

        switch (operator) {
            case '+':
                printf("Operation to be processed: %.2lf + %.2lf. Result: %.2lf\n", num1, num2, num1 + num2);
            break;
            case '-':
                printf("Operation to be processed: %.2lf - %.2lf. Result: %.2lf\n", num1, num2, num1 - num2);
            break;
            case '*':
                printf("Operation to be processed: %.2lf * %.2lf. Result: %.2lf\n", num1, num2, num1 * num2);
            break;
            case '/':
                if (num2 != 0) {
                    printf("Operation to be processed: %.2lf / %.2lf. Result: %.2lf\n", num1, num2, num1 / num2);
                } else {
                    printf("Cannot divide by zero.\n");
                }
            break;
            default:
                printf("Invalid arithmetic operator.\n");
        }

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &continueCalc);
    } while (continueCalc == 'y' || continueCalc == 'Y');

    return 0;
}
