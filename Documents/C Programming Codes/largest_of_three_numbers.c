#include<stdio.h>
int main()
{   
    int a,b,c,z;
    printf("enter the number a : \n,b : \n,c: \n");
    scanf("%d%d%d",&a,&b,&c);
   

    z=a>b?(a>c?a:c):(b>c?b:c);
    printf("the largest of the three entered numbers is :%d",z);
    return 0;
} 