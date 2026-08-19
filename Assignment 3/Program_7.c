// 7 Find factorial of given number.
// Input: n = 5
// Output: 120

#include <stdio.h>

int main()
{
    int n, i=1 ,fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        fact = fact * i;
        i++;
    }

    printf("Factorial of %d = %lld\n", n, fact);

    return 0;
}
