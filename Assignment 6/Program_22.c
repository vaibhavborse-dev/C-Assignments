#include<stdio.h>

void strong1()
{
    int n, original, digit, sum=0;
    int fact, i;

    printf("Enter a number: ");
    scanf("%d",&n);

    original=n;

    while(n!=0)
    {
        digit=n%10;

        fact=1;
        i=1;

        while(i<=digit)
        {
            fact=fact*i;
            i++;
        }

        sum=sum+fact;
        n=n/10;
    }

    if(sum==original)
        printf("%d is a Strong Number.\n",original);
    else
        printf("%d is not a Strong Number.\n",original);
}

void strong2(int n)
{
    int original, digit, sum=0;
    int fact, i;

    original=n;

    while(n!=0)
    {
        digit=n%10;

        fact=1;
        i=1;

        while(i<=digit)
        {
            fact=fact*i;
            i++;
        }

        sum=sum+fact;
        n=n/10;
    }

    if(sum==original)
        printf("%d is a Strong Number.\n",original);
    else
        printf("%d is not a Strong Number.\n",original);
}

int strong3()
{
    int n, original, digit, sum=0;
    int fact, i;

    printf("Enter a number: ");
    scanf("%d",&n);

    original=n;

    while(n!=0)
    {
        digit=n%10;

        fact=1;
        i=1;

        while(i<=digit)
        {
            fact=fact*i;
            i++;
        }

        sum=sum+fact;
        n=n/10;
    }

    if(sum==original)
        return 1;
    else
        return 0;
}

int strong4(int n)
{
    int original, digit, sum=0;
    int fact, i;

    original=n;

    while(n!=0)
    {
        digit=n%10;

        fact=1;
        i=1;

        while(i<=digit)
        {
            fact=fact*i;
            i++;
        }

        sum=sum+fact;
        n=n/10;
    }

    if(sum==original)
        return 1;
    else
        return 0;
}

int main()
{
    int res;

    strong1();

    strong2(145);

    res=strong3();

    if(res==1)
        printf("Strong Number\n");
    else
        printf("Not a Strong Number\n");

    res=strong4(40585);

    if(res==1)
        printf("Strong Number\n");
    else
        printf("Not a Strong Number\n");

    return 0;
}

