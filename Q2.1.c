#include <stdio.h>
#include <stdlib.h>

int main()
{
  int choice;
    double num1, num2, result;

    printf("Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (choice) {
        case 1:
   result = num1 + num2;
            printf("Addition result: %.2lf\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Subtraction result: %.2lf\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Multiplication result: %.2lf\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
        printf("Division result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please select a valid option (1-4).\n");
            break;
    }

}
