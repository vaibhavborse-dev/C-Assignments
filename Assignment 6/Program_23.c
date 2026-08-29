#include<stdio.h>

void palindrome1()
{
    int n, original, digit, reverse=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    original=n;

    while(n!=0)
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }

    if(reverse==original)
        printf("%d is a Palindrome Number.\n",original);
    else
        printf("%d is not a Palindrome Number.\n",original);
}

void palindrome2(int n)
{
    int original, digit, reverse=0;

    original=n;

    while(n!=0)
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }

    if(reverse==original)
        printf("%d is a Palindrome Number.\n",original);
    else
        printf("%d is not a Palindrome Number.\n",original);
}

int palindrome3()
{
    int n, original, digit, reverse=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    original=n;

    while(n!=0)
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }

    if(reverse==original)
        return 1;
    else
        return 0;
}

int palindrome4(int n)
{
    int original, digit, reverse=0;

    original=n;

    while(n!=0)
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }

    if(reverse==original)
        return 1;
    else
        return 0;
}

int main()
{
    int res;

    palindrome1();

    palindrome2(121);

    res=palindrome3();

    if(res==1)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");

    res=palindrome4(123);

    if(res==1)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");

    return 0;
}
