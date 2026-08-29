void case1()
{
	char c;
	printf("Enter the character ");
	scanf(" %c",&c);
	
	if(c>='A' && c<='Z')
	
		printf("The character is uppercase");
	
	else if(c>='a'&& c<='z')
	printf("Character is lowercase");
	printf("\n");
}
void case2(char c)
{
	
	if(c>='A' && c<='Z')
	
		printf("The character is uppercase");
	
	else if(c>='a'&& c<='z')
	printf("Character is lowercase");
}
int  case3()
{
	char c;
	printf("\n");
	printf("Enter the character ");
	scanf(" %c",&c);
	
	if(c>='A' && c<='Z')
		return 0;
	
	else if(c>='a'&& c<='z')
		return 1;
	printf("\n");
}
int  case4(char c)
{
	
	if(c>='A' && c<='Z')
		return 0;
	
	else if(c>='a'&& c<='z')
		return 1;
}
void main()
{
	int res;
	case1();
	case2('H');
	res=case3();
	 if(res==0)
	 {
		printf("The character is uppercase");
	}
	else printf("Character is lowercase");
	printf("\n");
	
	res=case4('P');

	if(res==0)
	 {
		printf("The character is uppercase");
	}
	else printf("Character is lowercase");
}
