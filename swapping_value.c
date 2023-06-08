//WAP TO SWAP THE VALUE
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nENTER THE VALUE IN A");
    scanf("%d",&a);
    printf("\nENTER THE VALUE IN B");
    scanf("%d",&b);
    printf("\na=%d,b=%d", a,b);
    c=a;
    a=b;
    b=c;
    printf("the swapping value a=%d,b=%d",a,b);
return 0;
}