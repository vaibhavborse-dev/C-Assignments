#include<stdio.h>

void strong(int *n)
{
    int temp, rem, i;
    int sum = 0;
    int fact;

    temp = *n;

    while(temp != 0)
    {
        rem = temp % 10;

        fact = 1;

        for(i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;

        temp = temp / 10;
    }

    if(sum == *n)
        printf("Strong");
    else
        printf("Not Strong");
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    strong(&n);

    return 0;
}
