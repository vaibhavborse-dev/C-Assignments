//mystrncasecmp
#include <stdio.h>

void main()
{
    char str1[20], str2[20];
    int n;
    int i = 0;
    int count = 0;
    char ch1, ch2;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("How many characters you want to compare: ");
    scanf("%d", &n);

    while(i < n)
    {
        ch1 = str1[i];
        ch2 = str2[i];

        /* Convert uppercase to lowercase */
        if(ch1 >= 'A' && ch1 <= 'Z')
        {
            ch1 = ch1 + 32;
        }

        if(ch2 >= 'A' && ch2 <= 'Z')
        {
            ch2 = ch2 + 32;
        }

        if(ch1 != ch2)
        {
            count = 1;
            break;
        }

        if(ch1 == '\0' || ch2 == '\0')
        {
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
