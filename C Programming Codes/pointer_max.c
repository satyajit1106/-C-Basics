#include<stdio.h>
void max(int *a,int *b);
int main()
{
    int x,y;
    printf("enter the first number ");
    scanf("%d",&x);
    printf("enter the second number ");
    scanf("%d",&y);
    max(&x,&y);

    

return 0;
}
void max(int *a,int *b){
    if(*a>*b){
        printf("%d is the greatest ",*a);
    }else{printf("%d is the greatest ",*b);}
}