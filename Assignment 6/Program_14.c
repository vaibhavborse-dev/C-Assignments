#include<stdio.h>

void age1()
{
    int age;

    printf("Enter the age: ");
    scanf("%d",&age);

    if(age<12)
        printf("You are child\n");
    else if(age>12 && age<19)
        printf("You are Teenager\n");
    else if(age>20 && age<59)
        printf("You are adult\n");
    else if(age>60)
        printf("You are senior\n");
}

void age2(int age)
{
    if(age<12)
        printf("You are child\n");
    else if(age>12 && age<19)
        printf("You are Teenager\n");
    else if(age>20 && age<59)
        printf("You are adult\n");
    else if(age>60)
        printf("You are senior\n");
}

int age3()
{
    int age;

    printf("Enter the age: ");
    scanf("%d",&age);

    if(age<12)
        return 1;
    else if(age>12 && age<19)
        return 2;
    else if(age>20 && age<59)
        return 3;
    else if(age>60)
        return 4;

    return 0;
}

int age4(int age)
{
    if(age<12)
        return 1;
    else if(age>12 && age<19)
        return 2;
    else if(age>20 && age<59)
        return 3;
    else if(age>60)
        return 4;

    return 0;
}

int main()
{
    int res;

    age1();

    age2(18);

    res=age3();

    if(res==1)
        printf("You are child\n");
    else if(res==2)
        printf("You are Teenager\n");
    else if(res==3)
        printf("You are adult\n");
    else if(res==4)
        printf("You are senior\n");

    res=age4(65);

    if(res==1)
        printf("You are child\n");
    else if(res==2)
        printf("You are Teenager\n");
    else if(res==3)
        printf("You are adult\n");
    else if(res==4)
        printf("You are senior\n");

    return 0;
}
