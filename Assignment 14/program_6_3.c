struct date
{
	int date;
	char month[20];
	int year;
};

void store(struct date d[],int s)
{
	for(int i=0;i<s;i++)
	{
		printf("The %d date is \n",i+1);
		
		printf("Enter the date:");
		scanf("%d",&d[i].date);
		
		printf("Enter the month:");
		scanf("%s",d[i].month);
		
		printf("Enter the year :");
		scanf("%d",&d[i].year);
	}
}

void display(struct date d[],int n)
{
	for(int i=0;i<n;i++)
	{
	printf("Date is :%d\n",d[i].date);
	printf("Month is :%s\n",d[i].month);
	printf("Year is :%d\n",d[i].year);
	}
}

void main()
{
	struct date d[3];
	store(d,3);
	display(d,3);
}
