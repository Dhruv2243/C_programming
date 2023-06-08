#include<stdio.h>
int main()
{
    int rating;
   printf("ENTER YOUR RATING FROM 1 TO 5\n");
   scanf("%d",&rating);
   switch(rating){
       case 1:
       printf("\nthe rating is 1 ");
       break;
       case 2:
       printf("\nthe rating is 2");
       break;
       case 3:
       printf("\nthe rating is 3");
       break;
       case 4:
       printf("\n the rating is 4");
       break;
       case 5:
       printf("\nthe rating is 5");
       break;
       default:
       printf("\n the rating is invalid");       
   }
    return 0;
}