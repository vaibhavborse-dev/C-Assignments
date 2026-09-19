struct date
{
	int date;
	char month[20];
	int year;
};

void store (struct date *d)
{
	printf("Enter the date:");
	scanf("%d",&d->date);
	
	printf("Enter the month:");
	scanf("%s",d->month);
	
	printf("Enter the year :");
	scanf("%d",&d->year);
}

void display(struct date *d)
{
	printf("Date is :%d\n",d->date);
	printf("Month is :%s\n",d->month);
	printf("Year is :%d\n",d->year);
}

void main()
{
	struct date d;
	store(&d);
	display(&d);
}
