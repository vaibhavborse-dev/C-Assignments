#include<stdio.h>

void table1()
{
    int a=1;

    while(a<=10)
    {
        printf("%d\n",a*5);
        a++;
    }
}

void table2(int a)
{
    while(a<=10)
    {
        printf("%d\n",a*5);
        a++;
    }
}

int main()
{
    table1();

    printf("\n");

    table2(1);

    return 0;
}
