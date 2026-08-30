#include<stdio.h>

void strongRange(int *n)
{
    int i, temp, rem, j;
    int fact, sum;

    for(i = 1; i <= *n; i++)
    {
        temp = i;
        sum = 0;

        while(temp != 0)
        {
            rem = temp % 10;

            fact = 1;

            for(j = 1; j <= rem; j++)
            {
                fact = fact * j;
            }

            sum = sum + fact;

            temp = temp / 10;
        }

        if(sum == i)
            printf("%d ", i);
    }
}

int main()
{
    int n;

    printf("Enter range: ");
    scanf("%d", &n);

    strongRange(&n);

    return 0;
}
