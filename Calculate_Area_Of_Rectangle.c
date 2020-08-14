#include<stdio.h>

int main()
{
    float lenght,width,area;
    printf("Enter lenght of rectangle\n");
    scanf("%f",&lenght);
    printf("Enter width of rectangle\n");
    scanf("%f",&width);
    area=lenght*width;
    printf("Area of Rectangle is %.2f ",area);
    return 0;
}