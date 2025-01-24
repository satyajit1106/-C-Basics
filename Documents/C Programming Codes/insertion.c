#include<stdio.h>
#include<stdlib.h>


{

    //  insertion and deletion of array 

    int arr[20],n;
    printf("enter the number of elements of array ");
    scanf("%d",&n);
    printf( "enter the element of array");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }

void display()
{
int pos , arr[20];
int n,i;
    
    if (n=0){
        printf("INVALID ATTEMPT");
    }
    else{
        for (int i=0;i<n ;i++) 
        {
            printf("%d",arr[i]);
        }
    }

}

void insert()
{
    int i , pos , val, n, a[];
    printf("enter the position of element ");
    scanf("%d",&pos);
    printf("enter the value to be inseted ");
    scanf("%d",&val);

    for (int i= pos ;i<= pos ; i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=val;
    n=n+1;
}
void delete()
{
    int pos ,n,arr[20];
    printf ("enter the position ");
    scanf("%d",&pos);
    for(int i=pos;i>pos,i++){
        arr[i]= arr[i+1];
    }
    n=n+1;
}

void main(){
    int choice;
    printf("enter the choice 1.");
    scanf("%d",&choice);
    switch(choice){
        case '1': display()
                break;
        case '2': insert()
                break;
        case '3': delete()
                break;
             //   default: printf("default");
    } 

}