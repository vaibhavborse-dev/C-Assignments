
#include<stdio.h>

void greater1()
{
    int a=1000,b=200,c=300;

    if(a>b)
    {
        if(a>c)
            printf("A is greater\n");
        else
            printf("C is greater\n");
    }
    else if(b>a)
    {
        if(b>c)
            printf("B is greater\n");
        else
            printf("C is greater\n");
    }
}

void greater2(int a, int b, int c)
{
    if(a>b)
    {
        if(a>c)
            printf("A is greater\n");
        else
            printf("C is greater\n");
    }
    else if(b>a)
    {
        if(b>c)
            printf("B is greater\n");
        else
            printf("C is greater\n");
    }
}

int greater3()
{
    int a=1000,b=200,c=300;

    if(a>b)
    {
        if(a>c)
            return 1;
        else
            return 3;
    }
    else if(b>a)
    {
        if(b>c)
            return 2;
        else
            return 3;
    }

    return 0;
}

int greater4(int a, int b, int c)
{
    if(a>b)
    {
        if(a>c)
            return 1;
        else
            return 3;
    }
    else if(b>a)
    {
        if(b>c)
            return 2;
        else
            return 3;
    }

    return 0;
}

int main()
{
    int res;

    greater1();

    greater2(1000,200,300);

    res = greater3();

    if(res == 1)
        printf("A is greater\n");
    else if(res == 2)
        printf("B is greater\n");
    else if(res == 3)
        printf("C is greater\n");

    res = greater4(1000,200,300);

    if(res == 1)
        printf("A is greater\n");
    else if(res == 2)
        printf("B is greater\n");
    else if(res == 3)
        printf("C is greater\n");

    return 0;
}

