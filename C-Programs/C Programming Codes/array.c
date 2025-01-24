// print the price of the items including the gst

#include<stdio.h>
int main()
{
    float price[3];
    printf("enter the number :");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("total value of the product is %.1f \n",price[0]+price[0]*0.18);
    printf("total value of the product is %.1f \n",price[1]+price[1]*0.18);
    printf("total value of the product is %.1f \n",price[2]+price[2]*0.18);

return 0;
}