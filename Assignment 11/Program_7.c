//mystrlower
#include<stdio.h>
void main()
{
	char str[10];
	printf("Enter the string ");
	scanf("%s",&str);
	
	int i=0;
	
	while(str[i] !='\0')
	{
		if(str[i] >= 'A'  && str[i] <='Z')
		{
			str[i]=str[i]+32;
			
		}
		i++;
	}
	printf("%s",str);	
	}
