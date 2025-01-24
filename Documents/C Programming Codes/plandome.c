#include<stdio.h>
int main()
{
int n,r,sum=0,temp;
printf("enter the number : \n");
scanf("%d",&n);

temp=n;
while(n>0){
    r=n%10;
    sum=sum*10+r;
    n=n/10;
}
if (sum==temp){
    printf("it is the palandrome");
} else {printf("it is not a palandrome");}

return 0;
}

