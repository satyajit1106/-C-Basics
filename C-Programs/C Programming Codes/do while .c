
// to break at the point where the number is the multiple of 7;

#include<stdio.h>
int main()
{
    int n ;
    do{ 
        printf("enter the number : \n");
        scanf("%d",&n);

        if(n%7==0){
            break;
        }
        printf("%d \n",n);


    }while(1);
    printf("thank you");
    
return 0;
}