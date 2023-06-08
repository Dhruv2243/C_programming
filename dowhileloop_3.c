// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     do
//     {
//         printf("the value of i is %d\n", i);
//         i++;
//     } while (i < 10);
//     return 34;
// } 
#include<stdio.h>
void main()
{
    // int i=4;
    // do
    // {
    // printf("\nthe value of i=%d",i);
    // i--;
    // } while (i>=1);
    int i=0,n;
    printf("ENTER THE LIMIT TO PRINT THE NATURAL NO=");
    scanf("%d",&n);
    do{
        if(i>0){
        printf(" %d \t",i);
        }
        i++;
    }
        while(i<=n);
}