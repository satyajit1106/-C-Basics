#include<stdio.h>
void table(int n);

int main()
{   
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    table(n);
    
return 0;
}

void table(int n){
    int i;
    for(i=10;i>=1;i++){
        printf("%d \n",i*n);
    }
}