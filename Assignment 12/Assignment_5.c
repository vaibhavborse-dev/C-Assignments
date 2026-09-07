void main()
{
	char str[10];
	
	printf("Enter the string\n");
	scanf("%s", str);
	int sum=0;
	int i=0;
	while(str[i] !='\0')
	{
	if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u')
			{
				sum=sum+1;
			}
		i++;
	}
	printf("%d",sum);
}
