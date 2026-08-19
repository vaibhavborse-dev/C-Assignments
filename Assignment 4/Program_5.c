// 5. Write a menu driven program to take a number for user and perform operations as follows.

// Press 1.To check number is even or odd.
// 2.To check number is prime or not.
// 3.To check number is pallindrome or not.
// 4.To check number is positive, negative or zero.
// 5.To reverse a number.
// 6.To find sum of digits.

void main()
{
	int no,choice,temp=0,rem,rev,sum;
;
	
	printf("Enter your choice: ");
	scanf("%d",&no);
	
	printf("1.Check no even or odd\n");
	printf("2.Check prime or not\n");
	printf("3.Check palindrome or not \n");
	printf("4.Check positive negative or zero \n");
	printf("5.To reverse a numeber \n");
	printf("6.To find sum of digit");
	
	printf("Enter your choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		
    case 1:
    	    if(no%2==0)
    	    {
    	    	printf("The no is even : ");
			}
			else
				printf("The no is odd: ");
			break;
				
	case 2: 
	       for(int i=2;i<no;i++)
	       {
	       	  if(no%i==0)
	       	  	temp=1;
		   }
		   if(temp==0)
		   		printf("no is prime:");
		   else
		   		printf("no is odd:");
		    break;
		
	case 3:
		   
		   temp=no;
		   rev=0;
		   while(no !=0)
		   {
		   	rem=no%10;
		   	rev=rev * 10 + rem;
		   	no=no/10;
		   	
		   }
		   if(temp==rev)
		   		printf("No is palindrome: ");
		   else
		   		printf("no is not palindrome:");
		   	break;
		   
	case 4:
		    if(no>0)
		    	printf("No is positive :");
		    
		    else if(no<0)
		    	printf("No is negative:");
		    
		    else
		    	printf("No is Zero");
		    break;
	
	case 5:
		   rev=0;
		   
		   while(no!=0)
		   {
		   	rem=no% 10;
		   	rev=rev*10+rem;
		   	no=no/10;
		   }
		   printf("rev of %d",rev);
		   break;
		  
	case 6:
		
		  sum=0;
		  while(no!=0)
		  {
		  	rem=no%10;
		  	sum=sum+rem;
		  	no=no/10;
		  }
		  printf("sum is %d",sum);
		  break ;
		
	default:
	{
		printf("Invalid choice:");
	}
	}
}
