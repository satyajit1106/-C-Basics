#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("%d is not the prime number",n);
            break;
        }else{
            printf("%d is a prime number",n);
            break;

        }
    }

return 0;
}