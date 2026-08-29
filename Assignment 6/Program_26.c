#include<stdio.h>

void perfect1()
{
    int no,sum=0;
    int i;

    printf("Enter the no: ");
    scanf("%d",&no);

    for(i=1;i<no;i++)
    {
        if(no%i==0)
        {
            sum=sum+i;
        }
    }

    if(no==sum)
        printf("No is perfect\n");
    else
        printf("No is not perfect\n");
}

void perfect2(int no)
{
    int sum=0;
    int i;

    for(i=1;i<no;i++)
    {
        if(no%i==0)
        {
            sum=sum+i;
        }
    }

    if(no==sum)
        printf("No is perfect\n");
    else
        printf("No is not perfect\n");
}

int main()
{
    perfect1();

    printf("\n");

    perfect2(28);

    return 0;
}
