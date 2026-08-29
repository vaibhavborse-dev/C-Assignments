#include<stdio.h>

void salary1()
{
    int sal, da, hra, ta;
    float total;

    printf("\nEnter the salary: ");
    scanf("%d", &sal);

    if(sal >= 5000)
    {
        da = sal * 0.10;
        ta = sal * 0.15;
        hra = sal * 0.25;
    }
    else
    {
        da = sal * 0.15;
        ta = sal * 0.25;
        hra = sal * 0.30;
    }

    total = sal + da + ta + hra;

    printf("Total salary = %.2f\n", total);
}


void salary2(int sal)
{
    int da, hra, ta;
    float total;

    if(sal >= 5000)
    {
        da = sal * 0.10;
        ta = sal * 0.15;
        hra = sal * 0.25;
    }
    else
    {
        da = sal * 0.15;
        ta = sal * 0.25;
        hra = sal * 0.30;
    }

    total = sal + da + ta + hra;

    printf("Total salary = %.2f\n", total);
}



float salary3()
{
    int sal, da, hra, ta;
    float total;

    printf("\nEnter the salary: ");
    scanf("%d", &sal);

    if(sal >= 5000)
    {
        da = sal * 0.10;
        ta = sal * 0.15;
        hra = sal * 0.25;
    }
    else
    {
        da = sal * 0.15;
        ta = sal * 0.25;
        hra = sal * 0.30;
    }

    total = sal + da + ta + hra;

    return total;
}


float salary4(int sal)
{
    int da, hra, ta;
    float total;

    if(sal >= 5000)
    {
        da = sal * 0.10;
        ta = sal * 0.15;
        hra = sal * 0.25;
    }
    else
    {
        da = sal * 0.15;
        ta = sal * 0.25;
        hra = sal * 0.30;
    }

    total = sal + da + ta + hra;

    return total;
}


int main()
{
    float res;

    salary1();

    salary2(55000);

    res = salary3();
    printf("Total salary = %.2f\n", res);

    res = salary4(60000);
    printf("Total salary = %.2f\n", res);

    return 0;
}
