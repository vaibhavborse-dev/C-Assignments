//mystrnstr
#include <stdio.h>

void  main()
{
    char str[50];
    char sub[20];

    int n;
    int i, j;
    int found = 0;

    printf("Enter main string: ");
    scanf("%s", str);

    printf("Enter string to search: ");
    scanf("%s", sub);

    printf("Enter number of characters: ");
    scanf("%d", &n);

    for(i = 0; i < n && str[i] != '\0'; i++)
    {
        j = 0;

        while(sub[j] != '\0' &&
              i + j < n &&
              str[i + j] == sub[j])
        {
            j++;
        }

        if(sub[j] == '\0')
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("Substring found");
    }
    else
    {
        printf("Substring not found");
    }

}
