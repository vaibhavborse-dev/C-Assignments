// 9 Check the given number is Palindrome number or not.
// Input: n = 121
// Output: Palindrome


#include <stdio.h>

int main()
{
    int n, original, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (reverse == original)
        printf("%d is a Palindrome Number.\n", original);
    else
        printf("%d is not a Palindrome Number.\n", original);

    return 0;
}
