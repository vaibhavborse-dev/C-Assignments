//mystrrchr
#include <stdio.h>

void main()
{
    char str[20];
    char ch;
    int i = 0;
    int pos = -1;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            pos = i;
        }

        i++;
    }

    if(pos != -1)
    {
        printf("Last occurrence found at position %d", pos);
    }
    else
    {
        printf("Character not found");
    }

}
