#include<stdio.h>

void div1()
{
    int no;

    printf("Enter the no: ");
    scanf("%d",&no);

    if(no%3==0 && no%5==0)
        printf("No is divisible by 3 and 5\n");
    else if(no%3==0)
        printf("No is divisible by 3\n");
    else if(no%5==0)
        printf("No is divisible by 5\n");
    else
        printf("No is not divisible by 3 or 5\n");
}

void div2(int no)
{
    if(no%3==0 && no%5==0)
        printf("No is divisible by 3 and 5\n");
    else if(no%3==0)
        printf("No is divisible by 3\n");
    else if(no%5==0)
        printf("No is divisible by 5\n");
    else
        printf("No is not divisible by 3 or 5\n");
}

int div3()
{
    int no;

    printf("Enter the no: ");
    scanf("%d",&no);

    if(no%3==0 && no%5==0)
        return 1;
    else if(no%3==0)
        return 2;
    else if(no%5==0)
        return 3;
    else
        return 4;
}

int div4(int no)
{
    if(no%3==0 && no%5==0)
        return 1;
    else if(no%3==0)
        return 2;
    else if(no%5==0)
        return 3;
    else
        return 4;
}

int main()
{
    int res;

    div1();

    div2(15);

    res=div3();

    if(res==1)
        printf("No is divisible by 3 and 5\n");
    else if(res==2)
        printf("No is divisible by 3\n");
    else if(res==3)
        printf("No is divisible by 5\n");
    else
        printf("No is not divisible by 3 or 5\n");

    res=div4(10);

    if(res==1)
        printf("No is divisible by 3 and 5\n");
    else if(res==2)
        printf("No is divisible by 3\n");
    else if(res==3)
        printf("No is divisible by 5\n");
    else
        printf("No is not divisible by 3 or 5\n");

    return 0;
}
