#include<stdio.h>
void reverse(int arr[],int n);

int main()
{  
    int arr[]={1,3,2,4,5,6},n;
    
    reverse(arr,6);
    
return 0;
}
void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstnum=arr[i];
        int secondnum=arr[n-i-1];
        arr[n-i-1]=firstnum;
        arr[i]=secondnum;
    }
for (int i=0;i<n;i++){
    printf("%d \t",arr[i]);
    }
    
}
