#include<stdio.h>

void digit1()
{
    int n, first, last, sum;

    printf("Enter a number: ");
    scanf("%d",&n);

    last=n%10;

    while(n>=10)
    {
        n=n/10;
    }

    first=n;
    sum=first+last;

    printf("First digit = %d\n",first);
    printf("Last digit = %d\n",last);
    printf("Sum = %d\n",sum);
}

void digit2(int n)
{
    int first, last, sum;

    last=n%10;

    while(n>=10)
    {
        n=n/10;
    }

    first=n;
    sum=first+last;

    printf("First digit = %d\n",first);
    printf("Last digit = %d\n",last);
    printf("Sum = %d\n",sum);
}

int digit3()
{
    int n, first, last, sum;

    printf("Enter a number: ");
    scanf("%d",&n);

    last=n%10;

    while(n>=10)
    {
        n=n/10;
    }

    first=n;
    sum=first+last;

    return sum;
}

int digit4(int n)
{
    int first, last, sum;

    last=n%10;

    while(n>=10)
    {
        n=n/10;
    }

    first=n;
    sum=first+last;

    return sum;
}

int main()
{
    int res;

    digit1();

    digit2(12345);

    res=digit3();
    printf("Sum = %d\n",res);

    res=digit4(9876);
    printf("Sum = %d\n",res);

    return 0;
}
