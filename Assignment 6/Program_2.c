#include<stdio.h>

void palindrome1()
{
	int no=32,first,last,temp,sum;
	
	temp=no;
	sum=0;
	while(no != 0)
	{
	first=no%10;
	sum=sum*10+first;
	no=no/10;
   }
    
    
    if(temp == sum)
    printf("%d : NO is palindrome \n", temp);
else
    printf("%d : No is not palindrome \n", temp);
    

}

void palindrome2(int n)
{
	int first,last,temp,sum;
	
	temp=n;
	sum=0;
	while(n != 0)
	{
	first=n%10;
	sum=sum*10+first;
	n=n/10;
    }
    
    
   if(temp == sum)
    printf("%d : NO is palindrome ", temp);
else
    printf("%d : No is not palindrome ", temp);
    
}

int palindrome3()
{
		int no=32,first,last,temp,sum;
	
	temp=no;
	sum=0;
	while(no != 0)
	{
	first=no%10;
	sum=sum*10+first;
	no=no/10;
   }
    
    
    if(temp == sum)
     	return 0;
else
		return 1;    

}


int palindrome4(int n)
{
	int first, last ,sum ,temp;
	
	temp=sum;
	sum=0;
	while (n!=0)
	{
		first = n%10;
		sum=sum *10+first ;
		n = n /10;
	}
	
	if(temp==sum)
		return 0;
		
	else 
		return 1;

}



int main()
{
	int result;
	palindrome1();
		palindrome2(878);
		 result = palindrome3();
		 	if (result == 0)
		 		printf(" The no is palindrome : ");
		 	 	 
		 	 	 else 
		 	 	 	printf("The no is not palindrome : ");
		 	 	
		 	 	result = palindrome4(545);
		 	if (result == 0)
		 		printf(" The no is palindrome : ");
		 	 	 
		 	 	 else 
		 	 	 	printf("The no is not palindrome : ");
		 

	return 0;
}
