#include<stdio.h>
#include<string.h>

void main()
{
    char str[50];
    int i, j, flag = 1;

    printf("Enter the string: ");
    gets(str);

    i = 0;
    j = strlen(str) - 1;

    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }

        i++;
        j--;
    }

    if(flag == 1)
        printf("String is palindrome");
    else
        printf("String is not palindrome");
}
