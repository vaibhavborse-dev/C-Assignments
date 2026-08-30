#include<stdio.h>

void discount(float *price, char *student)
{
    float dis, finalPrice;

    if(*student == 'y' || *student == 'Y')
    {
        if(*price > 500)
            dis = *price * 20 / 100;
        else
            dis = *price * 10 / 100;
    }
    else
    {
        if(*price > 600)
            dis = *price * 15 / 100;
        else
            dis = 0;
    }

    finalPrice = *price - dis;

    printf("Discount = %.2f\n", dis);
    printf("Final Price = %.2f", finalPrice);
}

int main()
{
    float price;
    char student;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    discount(&price, &student);

    return 0;
}
