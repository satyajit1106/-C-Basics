#include<stdio.h>
int main()
{   
    int a;
    // do{
    // printf("enter the number \n");
    // scanf("%d",&a);

    // if(a%2!=0){
    //     break;
    // }
    // }while(1);
    // printf("thank you ");


    do{
        printf("enter the number \n");
        scanf("%d",&a);

        if(a%7==0){
            break;
        }
    }while(1);

    printf("thank you ");

return 0;
}   