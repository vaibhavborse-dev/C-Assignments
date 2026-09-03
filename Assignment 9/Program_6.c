#include<stdio.h>

int prime()
{
    int arr[] = {7,27,65,34,2,65};

    int i, j, count;

    for(i = 0; i < 6; i++)
    {
        count = 0;
        j = 2;

        while(j < arr[i])
        {
            if(arr[i] % j == 0)
            {
                count = 1;
                break;
            }

            j++;
        }

        if(count == 0)
        {
            printf("%d is prime\n", arr[i]);
        }
        else
        {
            printf("%d is not prime\n", arr[i]);
        }
    }

    return 0;
}

void main()
{
    int res;

    res = prime();
}
