//mystrncmp
#include <stdio.h>

void main()
{
    char str1[20];
    char str2[20];

    int n;
    int i = 0;
    int count = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Enter number of characters to compare: ");
    scanf("%d", &n);

    while(i < n && str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            count = 1;
            break;
        }

        i++;
    }

    if(count == 0)
    {
        printf("First %d characters are same", n);
    }
    else
    {
        printf("First %d characters are not same", n);
    }

}
