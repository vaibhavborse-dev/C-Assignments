#include<stdio.h>

void armstrong1()
{
    int no,rem,sum=0,temp;

    printf("Enter the no: ");
    scanf("%d",&no);

    temp=no;

    while(no!=0)
    {
        rem=no%10;
        sum=rem*rem*rem+sum;
        no=no/10;
    }

    if(temp==sum)
        printf("No is Armstrong\n");
    else
        printf("No is not Armstrong\n");
}

void armstrong2(int no)
{
    int rem,sum=0,temp;

    temp=no;

    while(no!=0)
    {
        rem=no%10;
        sum=rem*rem*rem+sum;
        no=no/10;
    }

    if(temp==sum)
        printf("No is Armstrong\n");
    else
        printf("No is not Armstrong\n");
}

int main()
{
    armstrong1();

    printf("\n");

    armstrong2(153);

    return 0;
}
