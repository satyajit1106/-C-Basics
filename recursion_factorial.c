#include<stdio.h>
int fact(int n);

int main()
{   
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    printf("factoraial of %d is %d",n,fact(n));

return 0;
}
int fact(int n){
    if (n==0){
        return 1;
    }
    int factNm1= fact(n-1);
    int factn= factNm1 * n;
    return factn;
}