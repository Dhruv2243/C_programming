#include<stdio.h>
int main()
{
   int principal,rate,time;
   float interest;
   printf("enter the amount of principal=");
   scanf("%d",&principal);
   printf("\nenter the rate of interest=");
   scanf("%d",&rate);
   printf("\nenter the time for principal=");
   scanf("%d",&time);
   interest=principal*rate*time/100;
   printf("interest=%d*%d*%d/100=%f",principal,rate,time,interest);

    return 0;
}