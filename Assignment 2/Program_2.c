#include<stdio.h>
void main()
{
	float a,b,c;
	
	printf("Eneter the sides of triangle : ");
	scanf("%f %f %f",&a,&b,&c);
	
	if(a == b && b == c)
    printf("Eqilateral triangel \n");
     
    else if(a==b || b==c || c==a)
    printf("Isolateral triangle \n");
    
    else
    printf("Scalene triangle");
	
}
