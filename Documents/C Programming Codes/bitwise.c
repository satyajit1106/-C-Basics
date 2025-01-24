#include<stdio.h>

int main()
{   
    int arr[]={1,1,2,3,2,3,4,5,5,6,6};
    int res=0;
    for(int i=0;i<11;i++){

        res = res ^ arr[i];

         printf("%d\n",res);
        
    }
return 0;
}
