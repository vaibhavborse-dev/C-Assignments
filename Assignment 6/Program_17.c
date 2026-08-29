#include<stdio.h>

void sum1()
{
    int start=5;
    int end=8;
    int sum=0;

    while(start<=end)
    {
        sum=sum+start;
        start++;
    }

    printf("Sum is %d\n",sum);
}

void sum2(int start, int end)
{
    int sum=0;

    while(start<=end)
    {
        sum=sum+start;
        start++;
    }

    printf("Sum is %d\n",sum);
}

int main()
{
    sum1();

    printf("\n");

    sum2(5,8);

    return 0;
}
