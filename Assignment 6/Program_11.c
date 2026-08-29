#include<stdio.h>

void marks1()
{
    int marks;

    printf("Enter the percentage: ");
    scanf("%d",&marks);

    if(marks>=75)
        printf("Distinction\n");
    else if(marks>=65)
        printf("First class\n");
    else if(marks>=55)
        printf("Second class\n");
    else if(marks>=45)
        printf("Third class\n");
    else if(marks>=35)
        printf("Pass\n");
    else
        printf("Fail\n");
}

void marks2(int marks)
{
    if(marks>=75)
        printf("Distinction\n");
    else if(marks>=65)
        printf("First class\n");
    else if(marks>=55)
        printf("Second class\n");
    else if(marks>=45)
        printf("Third class\n");
    else if(marks>=35)
        printf("Pass\n");
    else
        printf("Fail\n");
}

int marks3()
{
    int marks;

    printf("Enter the percentage: ");
    scanf("%d",&marks);

    if(marks>=75)
        return 1;
    else if(marks>=65)
        return 2;
    else if(marks>=55)
        return 3;
    else if(marks>=45)
        return 4;
    else if(marks>=35)
        return 5;
    else
        return 6;
}

int marks4(int marks)
{
    if(marks>=75)
        return 1;
    else if(marks>=65)
        return 2;
    else if(marks>=55)
        return 3;
    else if(marks>=45)
        return 4;
    else if(marks>=35)
        return 5;
    else
        return 6;
}

int main()
{
    int res;

    marks1();

    marks2(70);

    res=marks3();

    if(res==1)
        printf("Distinction\n");
    else if(res==2)
        printf("First class\n");
    else if(res==3)
        printf("Second class\n");
    else if(res==4)
        printf("Third class\n");
    else if(res==5)
        printf("Pass\n");
    else
        printf("Fail\n");

    res=marks4(80);

    if(res==1)
        printf("Distinction\n");
    else if(res==2)
        printf("First class\n");
    else if(res==3)
        printf("Second class\n");
    else if(res==4)
        printf("Third class\n");
    else if(res==5)
        printf("Pass\n");
    else
        printf("Fail\n");

    return 0;
}
