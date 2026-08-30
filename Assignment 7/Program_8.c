#include<stdio.h>

	void number(int *no)
	{
			for(int i=1;i<=*no;i++)
		{
			printf("%d\n",i);
		}
	}
	void main()
	{
		int s=10;
		
		number(&s);
	}
