//mystrcmp
void main()
{
    char str1[10];
	char str2[10];
	printf("Enter the string first string : ");
	scanf("%s",str1);
	
	printf("Enter the string second string : ");
	scanf("%s",str2);
	
	int count=0;
	int i=0;
	while(str1[i] !='\0' || str2[i] !='\0')
	{
			
			if(str1[i] != str2[i])
			{
				count=1;
				break;
			}
			i++;
		
	}
			
	if(count==0)
			printf("String are same");
			
	else
		printf("String not are same");

}
