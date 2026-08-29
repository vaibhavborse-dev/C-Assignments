#include<stdio.h>

void armstrong1()
{
    int n,sum=0,num,original;

    printf("Enter the no: ");
    scanf("%d",&n);

    original=n;

    while(n!=0)
    {
        num=n%10;
        sum=sum+num*num*num;
        n=n/10;
    }

    if(sum==original)
        printf("%d is Armstrong number\n",original);
    else
        printf("%d is not Armstrong number\n",original);
}

void armstrong2(int n)
{
    int sum=0,num,original;

    original=n;

    while(n!=0)
    {
        num=n%10;
        sum=sum+num*num*num;
        n=n/10;
    }

    if(sum==original)
        printf("%d is Armstrong number\n",original);
    else
        printf("%d is not Armstrong number\n",original);
}

int armstrong3()
{
    int n,sum=0,num,original;

    printf("Enter the no: ");
    scanf("%d",&n);

    original=n;

    while(n!=0)
    {
        num=n%10;
        sum=sum+num*num*num;
        n=n/10;
    }

    if(sum==original)
        return 1;
    else
        return 0;
}

int armstrong4(int n)
{
    int sum=0,num,original;

    original=n;

    while(n!=0)
    {
        num=n%10;
        sum=sum+num*num*num;
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

    armstrong1();

    armstrong2(153);

    res=armstrong3();

    if(res==1)
        printf("Armstrong number\n");
    else
        printf("Not Armstrong number\n");

    res=armstrong4(370);

    if(res==1)
        printf("Armstrong number\n");
    else
        printf("Not Armstrong number\n");

    return 0;
}
