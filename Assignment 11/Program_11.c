//mystrchr
#include <stdio.h>

void  main()
{
    char str[20];
    char ch;
    int i = 0;
    int found = 0;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            found = 1;
            break;
        }

        i++;
    }

    if(found == 1)
    {
        printf("Character found at position %d", i);
    }
    else
    {
        printf("Character not found");
    }

}
