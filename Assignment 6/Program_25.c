#include<stdio.h>

void prime1()
{
    int no;
    int temp=0;
    int i;

    printf("Enter the no: ");
    scanf("%d",&no);

    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            temp=1;
            break;
        }
    }

    if(temp==0)
        printf("No is prime\n");
    else
        printf("No is not prime\n");
}

void prime2(int no)
{
    int temp=0;
    int i;

    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            temp=1;
            break;
        }
    }

    if(temp==0)
        printf("No is prime\n");
    else
        printf("No is not prime\n");
}

int main()
{
    prime1();

    printf("\n");

    prime2(7);

    return 0;
}
