//mystrcat
void main()
{
    char str1[10];
    char str2[10];
    char str3[20];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    int i = 0;
    int j = 0;

    while(str1[i] != '\0')
    {
        str3[i] = str1[i];
        i++;
    }

    while(str2[j] != '\0')
    {
        str3[i] = str2[j];
        i++;
        j++;
    }

    str3[i] = '\0';

    printf("Concatenated string = %s", str3);
}
