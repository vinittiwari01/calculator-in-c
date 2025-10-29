#include <stdio.h>
#include <stdlib.h> // for exit()

int main()
{
    int choice;
    double num1, num2, result;

    while (1)
    {
        printf("\n=== Simple Calculator ===\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5)
        {
            printf("Exiting calculator... Goodbye!\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error! Division by zero not allowed.\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}