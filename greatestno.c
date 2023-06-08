#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("ENTER four INTEGER =");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b&&a>c&&a>d){
        printf("\n the greatest no=%d",a);
    }
    else if(b>a&&b>c&&b>d){
printf("\n the greatest no=%d",b);
    }
    else if(c>a&&c>b&&c>d){
        printf("\n the greatest no=%d",c);
    }
    else{
        printf("\n the greatest no=%d",d);
    }
    return 0;
    }