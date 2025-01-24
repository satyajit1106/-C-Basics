#include<stdio.h>
void helloworld(int count);

int main()
{
    int count;
    printf("enter the ittereations :");
    scanf("%d",&count);

    helloworld(count);

return 0;
}

void helloworld(int count){
    if(count==0){
        return;
    }
    printf("Hello world\n");
    helloworld(count-1);
}


// #include<stdio.h>
// int sum(int n);
// int main()
// {
//     int n,b;
//     printf("enter the value of n :");
//     scanf("%d",&n);
//     b=sum(n);
//     printf("%d",b);
// return 0;
// }

// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     int sumNm1=sum(n-1);
//     int sumN=sumNm1 + n;
//     return sumN;

// }