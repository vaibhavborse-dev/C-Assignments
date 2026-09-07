#include<stdio.h>
void main()
{
	char str[10];
	int ind;
	
	printf("Enter the string ");
	scanf("%s", str);
	
	printf("Enter the index you want to remove ");
	scanf("%d",&ind);
	
	for(int i=ind; str[i]!='\0';i++)
	{
			str[i]=str[i+1];
		
	}
	printf("%s",str);
}
