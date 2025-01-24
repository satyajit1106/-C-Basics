#include<stdio.h>
int main()
{
    int arr[5];
    int *ptr =&arr[0];      //address variable 
    int i;
    
    //input 
    for (int i=0;i<5;i++){
        printf("index of %d = ",i);
        scanf("%d \t",(ptr+i));
    }

    // output
    for (int i=0;i<5;i++){
     printf(" %d \n",*(ptr+i));
     }
    
return 0;
}

