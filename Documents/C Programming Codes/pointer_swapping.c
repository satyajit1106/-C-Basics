#include<stdio.h>
int main()
{
    int n;
    int *ptr=&n;

    printf("%u \n", &n);
    printf("%u \n",ptr); 
return 0;
}


// #include<stdio.h>
// void swap(int a,int b);
// void swapr(int *a ,int *b);

// int main()
// {
//     int x=4 ; int y=5;
//     swap(x,y);   
//     printf("x=%d & y=%d \n", x,y);


//     swapr(&x,&y);
//     printf("x=%d,y=%d \n",x,y);


// return 0;
// }
// // call by refrence ;
// void swapr(int *a,int *b){
//     int t=*a;
//     *a=*b;
//     *b=t;
//     printf("a=%d & b=%d \n",*a,*b);
// }

// // call by value ;
// void swap(int a,int b){
//     int t =a;
//     a=b;
//     b=t;
//     printf("a=%d & b=%d \n",a,b); 
// }

#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int x=4;int y=5;
    swap(&x,&y);
    printf("x=%d & y=%d \n",x,y);

return 0;
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("a=%d & b=%d \n",*a,*b);
} 