// 8 Check the given number is Strong number or not.
// Input: n = 145
// Output: Strong

#include <stdio.h>

int main()
{
    int n, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;

        int fact = 1;
        int i = 1;

        while (i <= digit)
        {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;

        n = n / 10;
    }

    if (sum == original)
        printf("%d is a Strong Number.\n", original);
    else
        printf("%d is not a Strong Number.\n", original);

    return 0;
}
