
#include<stdio.h>

void discount1()
{
    int price, discount, finalprice;
    char isstudent;

    printf("Enter the purchase price: ");
    scanf("%d",&price);

    printf("You are student? (y/n): ");
    scanf(" %c",&isstudent);

    if(isstudent=='y' || isstudent=='Y')
    {
        if(price>500)
            discount=price*0.20;
        else
            discount=price*0.10;
    }
    else
    {
        if(price>600)
            discount=price*0.15;
        else
            discount=price*0.0;
    }

    finalprice=price-discount;

    printf("Discount = %d\n",discount);
    printf("Final price = %d\n",finalprice);
}

void discount2(int price, char isstudent)
{
    int discount, finalprice;

    if(isstudent=='y' || isstudent=='Y')
    {
        if(price>500)
            discount=price*0.20;
        else
            discount=price*0.10;
    }
    else
    {
        if(price>600)
            discount=price*0.15;
        else
            discount=price*0.0;
    }

    finalprice=price-discount;

    printf("Discount = %d\n",discount);
    printf("Final price = %d\n",finalprice);
}

int discount3()
{
    int price, discount, finalprice;
    char isstudent;

    printf("Enter the purchase price: ");
    scanf("%d",&price);

    printf("You are student? (y/n): ");
    scanf(" %c",&isstudent);

    if(isstudent=='y' || isstudent=='Y')
    {
        if(price>500)
            discount=price*0.20;
        else
            discount=price*0.10;
    }
    else
    {
        if(price>600)
            discount=price*0.15;
        else
            discount=price*0.0;
    }

    finalprice=price-discount;

    return finalprice;
}

int discount4(int price, char isstudent)
{
    int discount, finalprice;

    if(isstudent=='y' || isstudent=='Y')
    {
        if(price>500)
            discount=price*0.20;
        else
            discount=price*0.10;
    }
    else
    {
        if(price>600)
            discount=price*0.15;
        else
            discount=price*0.0;
    }

    finalprice=price-discount;

    return finalprice;
}

int main()
{
    int res;

    discount1();

    discount2(1000,'y');

    res=discount3();
    printf("Final price = %d\n",res);

    res=discount4(1000,'n');
    printf("Final price = %d\n",res);

    return 0;
}

