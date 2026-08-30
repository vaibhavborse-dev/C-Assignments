#include<stdio.h>

void factorial(int *n)
{
    int i;
    int fact = 1;

    for(i = 1; i <= *n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    factorial(&n);

    return 0;
}
