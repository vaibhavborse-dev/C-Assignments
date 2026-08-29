#include<stdio.h>

void strong1()
{
    int no,temp,fact,sum=0,rev;
    int i;

    printf("Enter the no: ");
    scanf("%d",&no);

    temp=no;

    while(no!=0)
    {
        rev=no%10;
        fact=1;

        for(i=1;i<=rev;i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        no=no/10;
    }

    if(temp==sum)
        printf("No is strong\n");
    else
        printf("No is not strong\n");
}

void strong2(int no)
{
    int temp,fact,sum=0,rev;
    int i;

    temp=no;

    while(no!=0)
    {
        rev=no%10;
        fact=1;

        for(i=1;i<=rev;i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        no=no/10;
    }

    if(temp==sum)
        printf("No is strong\n");
    else
        printf("No is not strong\n");
}

int main()
{
    strong1();

    printf("\n");

    strong2(145);

    return 0;
}
