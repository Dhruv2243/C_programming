//the number is even or odd
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("ENTER THE VALUE\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("\n%d is even",a);
    }
else{
    printf("\n%d is odd",a);
}
    return 0;
}