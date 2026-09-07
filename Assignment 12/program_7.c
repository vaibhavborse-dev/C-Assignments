#include<stdio.h>
void main()
{
	char str[10];
	
	printf("Enter the string");
	gets(str);
	
	int i=0;
	int j=0;
	while(str[i] !='\0')
	{
		if(i%2!=0)
		{
			str[j]=str[i];
		i++;
		
	}j++;
	str[j]='\0';
	printf("%s",str);
}
