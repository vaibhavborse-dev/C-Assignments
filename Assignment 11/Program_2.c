//mystrlen
void main()
{
	char str[10];
	printf("Enter the string : ");
	scanf("%s",str);
	int count=0;
	int i=0;
	while(str[i]!='\0')
	{
		count=count+1;
		i++;
	}
	printf("length of string is : %d",count);
}
