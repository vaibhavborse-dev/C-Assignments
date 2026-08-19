#include<stdio.h>
void main();
{
	int price,discount;
	char isstudent;
	printf("Enter the purchase price");
	scanf("%d",&price);
	
	Fflush(stdin);
	printf("You are student? (y/n): ");
	scanf("%c",&isstudent);
	
	if(isstudent =='y' || isstudent=='Y')
	{
		if(price>500)
		discount = price*0.20;
	
      	else
		discount = price*0.10;
		
    }
    else 
    	if(price>600)
    	discount=price*0.15;
    	else
    	discount=price*0.0;
    	
	
    int	finalprice=price-discount;
    
    printf("Discount %d\n",&discount);
    printf("final prize %d",&finalprice);
	
		
}
