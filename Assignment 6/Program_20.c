#include<stdio.h>

void perfect1()
{
    int n,sum=0,i=1;

    printf("Enter the no: ");
    scanf("%d",&n);

    while(i<=n/2)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }

    if(sum==n)
        printf("%d is the perfect no\n",n);
    else
        printf("%d is not perfect\n",n);
}

void perfect2(int n)
{
    int sum=0,i=1;

    while(i<=n/2)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }

    if(sum==n)
        printf("%d is the perfect no\n",n);
    else
        printf("%d is not perfect\n",n);
}

int perfect3()
{
    int n,sum=0,i=1;

    printf("Enter the no: ");
    scanf("%d",&n);

    while(i<=n/2)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }

    if(sum==n)
        return 1;
    else
        return 0;
}

int perfect4(int n)
{
    int sum=0,i=1;

    while(i<=n/2)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }

    if(sum==n)
        return 1;
    else
        return 0;
}

int main()
{
    int res;

    perfect1();

    perfect2(28);

    res=perfect3();

    if(res==1)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");

    res=perfect4(10);

    if(res==1)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");

    return 0;
}
