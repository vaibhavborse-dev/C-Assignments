//mystrcasecmp
#include <stdio.h>

void main()
{
    char str1[20];
    char str2[20];

    int i = 0;
    int count = 0;
    char ch1, ch2;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while(str1[i] != '\0' || str2[i] != '\0')
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

        /* Compare characters */
        if(ch1 != ch2)
        {
            count = 1;
            break;
        }

        i++;
    }

    if(count == 0)
    {
        printf("Strings are same");
    }
    else
    {
        printf("Strings are not same");
    }
}
