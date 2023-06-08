#include<stdio.h>
int main()
{
     int age,vippass;
     printf("Enter your age=");
     scanf("%d",&age);
     printf("IF YOU HAVE VIP PASS PRESS '1' IF YOU DONT HAVE ONE PRESS '0'=");
     scanf("%d",&vippass);
    //           and         or     
     if((age>=18 && age<=70) || vippass==1)
     {
         printf("\nYOU CAN DRIVE");
     }
     else 
     {
      printf("\nYOU CANNOT DRIVE");
     }
return 0;
}