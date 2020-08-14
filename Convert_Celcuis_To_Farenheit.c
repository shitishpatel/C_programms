#include<stdio.h>

int main()
{
    float cel,far;
    printf("Enter the value of celcuis\n");
    scanf("%f",&cel);
    far=(cel*9)/5+32;
    printf("Farenheit value is %.2f ",far);
    return 0;
}