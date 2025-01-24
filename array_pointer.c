// #include<stdio.h>
// void print(int arr[],int n); 

// int main()
// {   
//     int arr[]={1,2,3,4,5,6};
//     print(arr,6);

// return 0;
// }
// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d \n", arr[i]);
//     }
//     printf("\n");     ????
// }




/*  using pointer enter the array 

    *arr == arr[0]
    because value at array ,will give the same output as the value at 0th index of an array 
    */



// #include<stdio.h>
// void function(int *arr,int n);           
// int main()
// {
//     int arr[] = {1,2,3,4,5,6};
//     function(arr,6);

// return 0;
// }
// void function(int *arr,int n){
//     for(int i=0;i<n;i++){
//         printf("%d \t", arr[i]);
//     }
// }





// taking the input n from the user in the array
#include<stdio.h>
void function(int arr[],int n);
int main()
{   int n;
    printf("enter the value of n \t");
    scanf("%d",&n);
    int arr[10000];
    for (int i=0;i<n;i++){
        printf("value at index %d =",i);
        scanf("%d",&arr[i]);
    }
    function(arr,n);

    return 0;
}

void function(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
}