#include<stdio.h>
float celcius(float degrees);
int main()
{
    float degrees;
    printf("enter the degrees :");
    scanf("%f",&degrees);

    printf("farenhite is %.3f ",celcius(degrees));

return 0;
}
float celcius(float degrees){
    
    float fahrenhite = (degrees *(9/5))+32;
    return fahrenhite; 
}
