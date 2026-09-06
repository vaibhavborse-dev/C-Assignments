//a. mystrcpy (Copy string another variableK)
void main()
{
	char str[10];
	char str2[10];
	printf("Enter the string : ");
	scanf("%s",str);
	
	int i=0;
		while(str[i] !='\0')
		{
			str2[i]=str[i];
			i++;
			
		}
		
	printf("%s",str2);
}
