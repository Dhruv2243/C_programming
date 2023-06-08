#include <stdio.h>
int main()
{
    int age;
    printf("\n ENTER YOUR AGE=");
    scanf("%d",&age);
    if (age>=90)
    {
        printf("You cannot drive you are above 90");
    }
    else
    {
        printf("you can drive the car you are below the 90");
    }
if(age==50)
{
    printf("\nHALF CENTURY");
}
    return 0;
}