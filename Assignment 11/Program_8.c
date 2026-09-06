//mystrrev
void main()
{
	char str[10];
	char str2[10];
	printf("Enter the string ");
	scanf("%s",&str);
	
	int i=0,j=0;
	int temp;
	while(str[j] !='\0')
	{
		j++;
	}
	j--;
	
	while(j>=0)
	{
		str2[i]=str[j];
		i++;
		j--;
	}
	str2[i]='\0';

	printf("%s",str2);
}
