//printing for the odd number 

#include<stdio.h>
int count(int arr[],int n);
int main()
{
    int arr[20],n;
    printf("enter the value of n :");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
    }
    printf("no of odd numbers are %d",count(arr,n));
        
 return 0;
}

int count(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if( arr[i] %2!=0){
            count++;
        }
    }
    return count;
}