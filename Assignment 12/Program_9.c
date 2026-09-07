void main()
{
	char str[50];
	int count=0;
	printf("Enter the string ");
	gets(str);
	
	char str2[50];
	int sount=0;
	printf("Enter the string ");
	gets(str2);
	
	for(int i=0;str[i]!='\0';i++)
	{
		count=count+1;
	}
	for(int j=0;str2[j]!='\0';j++)
	{
		sount=sount+1;
	}
	if(count >sount)
	{
		printf("Sting 1 is large");
	}
	else if(count < sount)
	{
	printf("String 2 is large");
	}
	else
	{
	printf("Both strings are equal");
	}
}
