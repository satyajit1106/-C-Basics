#include<stdio.h>
void gst(float price);
int main()
{
    float p,price;
    printf("enter the number :");
    scanf("%f",&price);

    gst(price);

return 0;
}
void gst(float price){
    
    float p = (price+(price*0.18));
     printf("total price of the item is %.1f",p);
}