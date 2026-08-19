#include<stdio.h>
void main()
{
	int totalminutes=80;
	
	int hours = totalminutes/60;
	printf("hours is %d\n",hours);
	
	int minutes=totalminutes%60;
	printf("minutes is %d",minutes);
}
