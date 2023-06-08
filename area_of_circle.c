#include<stdio.h>
int main()
{
    float area,r,v;
    int h;
    printf("Enter the value of radius of circle=");
    scanf("%f",&r);
    area=3.14159*r*r;
    printf("THE ARE OF THR CIRCLE = %f",area);
printf("\nENTER THE HEIGHT OF CYLINDER=");
scanf("%d",&h);
v=area*h;
printf("THE VOLUMN OF THE CYLINDER=%f",v);
 return 0;
}