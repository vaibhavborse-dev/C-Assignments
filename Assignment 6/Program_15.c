#include<stdio.h>

void display1()
{
    int a=1;

    while(a<=10)
    {
        printf("%d\n",a);
        a++;
    }
}

void display2(int a)
{
    while(a<=10)
    {
        printf("%d\n",a);
        a++;
    }
}

int main()
{
    display1();

    printf("\n");

    display2(1);

    return 0;
}

