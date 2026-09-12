#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *arr, size;
    
    printf("Enter the array size: ");
    scanf("%d",&size);
    
    arr=(int*)malloc(size * sizeof(int));
    
    printf("Enter the array elements: ");
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int count=0;

    for(int i=0;i<size;i++)
    {
        int flag=1;

        if(arr[i] < 2)
        {
            flag=0;
        }

        for(int j=2;j<arr[i];j++)
        {
            if(arr[i] % j == 0)
            {
                flag=0;
                break;
            }
        }

        if(flag == 1)
        {
            count++;
        }
    }

    printf("Number of prime numbers = %d",count);

    free(arr);
}
