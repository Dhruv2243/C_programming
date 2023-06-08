#include<stdio.h>
int main()
{
    int a=1;
    do{
        printf("%d",a);
        if(a==5)
        {
            break;
        }
        a++;
    }
    while(a<=10); 
    
    return 0;
}