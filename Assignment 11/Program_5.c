//mystrncpy
void main()
{
	char str[10];
	char str2[10];
	printf("Enter the string : ");
	scanf("%s",str);
	
	int no;
	printf("Enter the string you want ");
	scanf("%d",&no);
	
	int i=0;
		while(str[i] !='\0')
		{
			if(i<=no)
			str2[i]=str[i];
			
			i++;
			
		}
		
	printf("%s",str2);
}
