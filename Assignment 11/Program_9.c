//mystrstr
void  main()
{
    char str[50];
    char sub[20];

    int i, j;
    int found = 0;

    printf("Enter main string: ");
    scanf("%s", str);

    printf("Enter string to search: ");
    scanf("%s", sub);

    for(i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while(sub[j] != '\0' && str[i + j] == sub[j])
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
        printf("String found");
    }
    else
    {
        printf("String not found");
    }

}
