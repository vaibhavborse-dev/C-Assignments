//mystrncat
void main()
{
	char str[10];
	char str2[10];
	char str3[20];
	int no ;
	printf("Enter the string : ");
	scanf("%s",str);
	
	printf("Enter the second string :");
	scanf("%s",str2);
	
	printf("How many charactors you want to joind : ");
	scanf ("%d",&no);
	
	int i=0;
	while(str[i] !='\0')
	{
		str3[i]=str[i];
		i++;	
	}

	int j=0;
	while(str2[j] !='\0' && j<no)
	{
		
		str3[i]=str2[j];
		i++;
		j++;
	
}
	str3[i]='\0';
	printf("%s",str3);
	
}
