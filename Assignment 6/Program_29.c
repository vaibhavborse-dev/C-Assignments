#include<stdio.h>

void menu1()
{
    int no,choice,temp,rem,rev,sum;
    int i;

    printf("Enter the no: ");
    scanf("%d",&no);

    printf("1. Check no even or odd\n");
    printf("2. Check prime or not\n");
    printf("3. Check palindrome or not\n");
    printf("4. Check positive negative or zero\n");
    printf("5. To reverse a number\n");
    printf("6. To find sum of digit\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            if(no%2==0)
                printf("The no is even\n");
            else
                printf("The no is odd\n");
            break;

        case 2:
            temp=0;

            for(i=2;i<no;i++)
            {
                if(no%i==0)
                {
                    temp=1;
                    break;
                }
            }

            if(temp==0)
                printf("No is prime\n");
            else
                printf("No is not prime\n");
            break;

        case 3:
            temp=no;
            rev=0;

            while(no!=0)
            {
                rem=no%10;
                rev=rev*10+rem;
                no=no/10;
            }

            if(temp==rev)
                printf("No is palindrome\n");
            else
                printf("No is not palindrome\n");
            break;

        case 4:
            if(no>0)
                printf("No is positive\n");
            else if(no<0)
                printf("No is negative\n");
            else
                printf("No is zero\n");
            break;

        case 5:
            rev=0;

            while(no!=0)
            {
                rem=no%10;
                rev=rev*10+rem;
                no=no/10;
            }

            printf("Reverse = %d\n",rev);
            break;

        case 6:
            sum=0;

            while(no!=0)
            {
                rem=no%10;
                sum=sum+rem;
                no=no/10;
            }

            printf("Sum = %d\n",sum);
            break;

        default:
            printf("Invalid choice\n");
    }
}

void menu2(int no)
{
    int choice,temp,rem,rev,sum;
    int i;

    printf("1. Check no even or odd\n");
    printf("2. Check prime or not\n");
    printf("3. Check palindrome or not\n");
    printf("4. Check positive negative or zero\n");
    printf("5. To reverse a number\n");
    printf("6. To find sum of digit\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            if(no%2==0)
                printf("The no is even\n");
            else
                printf("The no is odd\n");
            break;

        case 2:
            temp=0;

            for(i=2;i<no;i++)
            {
                if(no%i==0)
                {
                    temp=1;
                    break;
                }
            }

            if(temp==0)
                printf("No is prime\n");
            else
                printf("No is not prime\n");
            break;

        case 3:
            temp=no;
            rev=0;

            while(no!=0)
            {
                rem=no%10;
                rev=rev*10+rem;
                no=no/10;
            }

            if(temp==rev)
                printf("No is palindrome\n");
            else
                printf("No is not palindrome\n");
            break;

        case 4:
            if(no>0)
                printf("No is positive\n");
            else if(no<0)
                printf("No is negative\n");
            else
                printf("No is zero\n");
            break;

        case 5:
            rev=0;

            while(no!=0)
            {
                rem=no%10;
                rev=rev*10+rem;
                no=no/10;
            }

            printf("Reverse = %d\n",rev);
            break;

        case 6:
            sum=0;

            while(no!=0)
            {
                rem=no%10;
                sum=sum+rem;
                no=no/10;
            }

            printf("Sum = %d\n",sum);
            break;

        default:
            printf("Invalid choice\n");
    }
}

int main()
{
    menu1();

    printf("\n");

    menu2(153);

    return 0;
}
