#include<stdio.h>

void calc1()
{
    int num1, num2;
    char choice;

    printf("Enter no 1: ");
    scanf("%d", &num1);

    printf("Enter no 2: ");
    scanf("%d", &num2);

    printf("Enter choice (+, -, *, /): ");
    scanf(" %c", &choice);

    if(choice == '+')
        printf("Addition = %d", num1 + num2);
    else if(choice == '-')
        printf("Subtraction = %d", num1 - num2);
    else if(choice == '*')
        printf("Multiplication = %d", num1 * num2);
    else if(choice == '/')
        printf("Division = %d", num1 / num2);
    else
        printf("Invalid choice");
}

void calc2(int num1, int num2, char choice)
{
    if(choice == '+')
        printf("Addition = %d", num1 + num2);
    else if(choice == '-')
        printf("Subtraction = %d", num1 - num2);
    else if(choice == '*')
        printf("Multiplication = %d", num1 * num2);
    else if(choice == '/')
        printf("Division = %d", num1 / num2);
    else
        printf("Invalid choice");
}

int calc3()
{
    int num1, num2, result;
    char choice;

    printf("Enter no 1: ");
    scanf("%d", &num1);

    printf("Enter no 2: ");
    scanf("%d", &num2);

    printf("Enter choice (+, -, *, /): ");
    scanf(" %c", &choice);

    if(choice == '+')
        result = num1 + num2;
    else if(choice == '-')
        result = num1 - num2;
    else if(choice == '*')
        result = num1 * num2;
    else if(choice == '/')
        result = num1 / num2;
    else
        return 0;

    return result;
}

int calc4(int num1, int num2, char choice)
{
    int result;

    if(choice == '+')
        result = num1 + num2;
    else if(choice == '-')
        result = num1 - num2;
    else if(choice == '*')
        result = num1 * num2;
    else if(choice == '/')
        result = num1 / num2;
    else
        return 0;

    return result;
}

int main()
{
    int res;

    calc1();

    calc2(10, 5, '+');

    res = calc3();
    printf("Result = %d", res);

    res = calc4(20, 4, '*');
    printf("\nResult = %d", res);

    return 0;
}

