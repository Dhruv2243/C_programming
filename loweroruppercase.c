#include <stdio.h>
int main()
{
    char alpha;
    printf("enter a alphabet either in lowercase or upper case \n");
    scanf("%c", &alpha);
    if (alpha >= 97 && alpha <= 122)
    {
        printf("THE ALPHABET IS IN LOWERCASE");
    }
    else
    {
        printf("THE ALPHABET IS IN UPPERCASE");
    }
    return 0;
}