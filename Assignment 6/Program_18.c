#include<stdio.h>

void prime1()
{
    int no=5,flag=0;
    int i;

    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("No is prime\n");
    else
        printf("No is not prime\n");
}

void prime2(int no)
{
    int flag=0;
    int i;

    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("No is prime\n");
    else
        printf("No is not prime\n");
}

int prime3()
{
    int no=5,flag=0;
    int i;

    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        return 1;
    else
        return 0;
}

int prime4(int no)
{
    int flag=0;
    int i;

    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        return 1;
    else
        return 0;
}

int main()
{
    int res;

    prime1();

    prime2(7);

    res=prime3();

    if(res==1)
        printf("No is prime\n");
    else
        printf("No is not prime\n");

    res=prime4(10);

    if(res==1)
        printf("No is prime\n");
    else
        printf("No is not prime\n");

    return 0;
}
