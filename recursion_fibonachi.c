#include<stdio.h>
int fib(int n);
int main()
{
    int n;
    printf("enter the numbre :");
    scanf("%d",&n);

    printf("%d",fib(n));

return 0;
}

int fib(int n){
    if(n==1||n==0){
        if(n==1){
            return 1;
        }
        if(n==0){
            return 0;
        }
    }
    int fibnm1=fib(n-1);
    int fibnm2=fib(n-2);
    int fibn= fibnm1+fibnm2;
    return fibn;

}