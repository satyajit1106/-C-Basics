#include<stdio.h>

//calling by refrence in this program;

void arithmetic(int a,int b,int *sum,int *mul,int *sub);
int main()
{
    int x=3,y=4,sum,sub,mul;

    arithmetic(x,y, &sum , &mul , &sub);   //address of the pointer is passed in the calling function;

return 0;
}
void arithmetic(int a,int b,int *sum,int *mul,int *sub){
    *sum=a+b;
    *mul=a*b;
    *sub=a-b;
    printf("sum=%d,mul=%d,sub=%d",*sum,*mul,*sub); // pointer of the function is made in this step;
}


