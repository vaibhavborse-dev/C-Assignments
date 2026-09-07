void main()
{
	char str[10];
	
	printf("Enter the string : ");
	scanf("%s", str);
	
	int i=0;
	while(str[i] !='\0')
	{
		if(str[i]=='a')
		{
			str[i]='$';
			
		}
		i++;
	}
	printf("%s",str);
}
