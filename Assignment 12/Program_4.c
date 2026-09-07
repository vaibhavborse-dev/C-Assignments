void main()
{
	char str[10];
	char temp;
	printf("Enter the string ");
	scanf("%s", str);
	
	int i=0;
	while(str[i] !='\0')
	{
		i++;
	}
	
	temp=str[0];
	str[0]=str[i-1];
	str[i-1]=temp;
	
	printf("%s",str);
}
