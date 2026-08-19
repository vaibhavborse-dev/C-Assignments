#include<stdio.h>
void main()
{
	char c;
	printf("Enter the character ");
	scanf("%c",&c);
	
	if(c>='A' && c<='Z')
	
		printf("The character is uppercase");
	
	else if(c>='a'&& c<='z')
	printf("Character is lowercase");
}
