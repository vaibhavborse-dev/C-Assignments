#include<stdio.h>

void firstLastSum(int *n)
{
    int temp, first, last, sum;

    temp = *n;

    last = temp % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
    }

    first = temp;

    sum = first + last;

    printf("First digit = %d\n", first);
    printf("Last digit = %d\n", last);
    printf("Sum = %d", sum);
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    firstLastSum(&n);

    return 0;
}
