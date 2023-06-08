#include <stdio.h>
int main()
{
    int income;
    float tax = 0;
    printf("\nENTER YOU INCOME =");
    scanf("%d",&income);
    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income > 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }
    if (income > 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }
    printf("\n TAX YOU HAVE TO PAY ON YOUR INCOME IS %f", tax);
    return 0;
}