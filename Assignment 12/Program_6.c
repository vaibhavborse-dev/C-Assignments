void main()
{
	char str[20];
	
	printf("Enter the string ");
	gets(str);
	
	int i=0;
	while(str[i] !='\0')
	{
		if(str[i]==' ')
		{
			str[i]='@';
		}
		i++;
	}
	
	printf("%s",str);
	
}
