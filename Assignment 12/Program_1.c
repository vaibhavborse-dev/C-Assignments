void main()
{
	char str[10];
	char ch;
	int found=0;
	
	printf("Enter the string ");
	scanf("%s", str);
	
	printf("Enter the character ");
	scanf(" %c",&ch);
	
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			found=1;
			break;
		}
		i++;
	}
	if(found==1)
		printf("Character found");
		
	else
		printf("Character not found");
}
