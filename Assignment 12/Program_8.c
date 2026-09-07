void main()
{
	char str[50];
	int count=1;
	
	printf("Enter the string ");
	gets(str);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i] ==' ')
		{
			count++;
		}
	}
	printf("%d",count);
}
