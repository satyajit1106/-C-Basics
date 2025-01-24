#include<stdio.h>
int main()
{   
    int n,i;
    printf("enter the ending value n :");
    scanf("%d",&n);

    // while(i<=n){
    //     printf("%d \n",i);
    //     i++;}

    for(int i=0 ; i<=n ; i+=1 ){
        printf("%d\n",i);
    }

    return 0;
}