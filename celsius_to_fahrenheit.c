//WAP TO CONVERT C TO F
#include<stdio.h>
#include<conio.h>
int main()
{
    float c,f;
    printf("\nenter the temp in celsius");
    scanf("%f",&c);
f=c*9/5+32;
printf("The temperture in f = %f",f);
return 0;
}