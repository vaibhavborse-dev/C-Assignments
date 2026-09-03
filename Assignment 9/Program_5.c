#include<stdio.h>

int num()
{
    int arr[] ={54,67,64,32,23,12,17};

    for(int i=0; i<7; i=i+2)
    {
        printf("%d ", arr[i]);
    }
	return 0;
}

void main()
{
    int res;
	 res = num();
}
