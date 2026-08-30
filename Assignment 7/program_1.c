#include<stdio.h>

void calculator(int *a, int *b, char *op)
{
    if(*op == '+')
        printf("Addition = %d", *a + *b);

    else if(*op == '-')
        printf("Subtraction = %d", *a - *b);

    else if(*op == '*')
        printf("Multiplication = %d", *a * *b);

    else if(*op == '/')
        printf("Division = %d", *a / *b);

    else if(*op == '%')
        printf("Modulus = %d", *a % *b);

    else
        printf("Invalid operator");
}

int main()
{
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator: ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    calculator(&a, &b, &op);

    return 0;
}
