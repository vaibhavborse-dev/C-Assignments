
#include<stdio.h>

void triangle1()
{
    float a,b,c;

    printf("Enter the sides of triangle: ");
    scanf("%f %f %f",&a,&b,&c);

    if(a == b && b == c)
        printf("Equilateral triangle\n");
    else if(a == b || b == c || c == a)
        printf("Isosceles triangle\n");
    else
        printf("Scalene triangle\n");
}

void triangle2(float a, float b, float c)
{
    if(a == b && b == c)
        printf("Equilateral triangle\n");
    else if(a == b || b == c || c == a)
        printf("Isosceles triangle\n");
    else
        printf("Scalene triangle\n");
}

int triangle3()
{
    float a,b,c;

    printf("Enter the sides of triangle: ");
    scanf("%f %f %f",&a,&b,&c);

    if(a == b && b == c)
        return 1;
    else if(a == b || b == c || c == a)
        return 2;
    else
        return 3;
}

int triangle4(float a, float b, float c)
{
    if(a == b && b == c)
        return 1;
    else if(a == b || b == c || c == a)
        return 2;
    else
        return 3;
}

int main()
{
    int res;

    triangle1();

    triangle2(5,5,8);

    res = triangle3();

    if(res == 1)
        printf("Equilateral triangle\n");
    else if(res == 2)
        printf("Isosceles triangle\n");
    else
        printf("Scalene triangle\n");

    res = triangle4(5,6,7);

    if(res == 1)
        printf("Equilateral triangle\n");
    else if(res == 2)
        printf("Isosceles triangle\n");
    else
        printf("Scalene triangle\n");

    return 0;
}

