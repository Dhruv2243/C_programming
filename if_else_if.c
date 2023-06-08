#include<stdio.h>
int main()
{
    int num;
    printf("ENTER THE NUMBER =");
    scanf("%d",&num);
    if(num==1){//the starting of if else
        printf("\nthe num is 1");
    }
    else if(num==2){
        printf("\nthe num value is 2");
    }
    else if(num==3){
        printf("\nthe num value is 3");
    }
    else{
        printf ("\n the number is invalid");
    }
     if(num==1||num==2||num==3)
    {// start of saperate if statement
printf("\nthe num is valid" );
    }//end of saperate if if else
    return 0;


}