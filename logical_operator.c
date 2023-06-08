//WAP LOGICAL OPERATER
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    int clrscr();
    printf("\nENTER THE FIRST VALUE WHICH YOU WANT TO STORE IN A");
    scanf("\n%d",&a);
    printf("\nENTER THE SECOND VALUE WHICH YOU WANT TO STORE IN B");
    scanf("\n%d",&b);
    c=a<=b;
    printf("\na<=b %d",c);
    return 0;
}