#include<stdio.h>

void evenOdd(int *n)
{
    if(*n % 2 == 0)
        printf("Number is Even");
    else
        printf("Number is Odd");
}

void prime(int *n)
{
    int i, flag = 0;

    if(*n <= 1)
    {
        printf("Number is Not Prime");
        return;
    }

    for(i = 2; i < *n; i++)
    {
        if(*n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Number is Prime");
    else
        printf("Number is Not Prime");
}

void palindrome(int *n)
{
    int temp, rem, rev = 0;

    temp = *n;

    while(temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(rev == *n)
        printf("Number is Palindrome");
    else
        printf("Number is Not Palindrome");
}

void positiveNegative(int *n)
{
    if(*n > 0)
        printf("Number is Positive");
    else if(*n < 0)
        printf("Number is Negative");
    else
        printf("Number is Zero");
}

void reverseNumber(int *n)
{
    int temp, rem, rev = 0;

    temp = *n;

    while(temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    printf("Reverse = %d", rev);
}

void sumDigits(int *n)
{
    int temp, rem, sum = 0;

    temp = *n;

    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }

    printf("Sum of digits = %d", sum);
}

int main()
{
    int no, choice;

    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Find Sum of Digits\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter number: ");
    scanf("%d", &no);

    switch(choice)
    {
        case 1:
            evenOdd(&no);
            break;

        case 2:
            prime(&no);
            break;

        case 3:
            palindrome(&no);
            break;

        case 4:
            positiveNegative(&no);
            break;

        case 5:
            reverseNumber(&no);
            break;

        case 6:
            sumDigits(&no);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
