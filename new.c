// #include<stdio.h>
// int main()
// {
// int num1=10;
// int num2=20;
// int *p=&num1;
// int *q=&num2;
// *p++=*q++;
// printf("%d%d",num1,num2);
// return 0;
// }



#include<stdio.h>
int main()
{
int a[20],n,i,j;
printf("enter the number of elements in array \t");
scanf("%d",&n);
printf("enter the array \t");
for(i=0;i<n;i++)
{
scanf("%d \n",&a[i]);
}
printf("the unsorted array \n");
for(i=0;i<n;i++){
printf("%d \n",a[i]);
}
printf("array after sorting");
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for(i=0;i<n;i++){
printf("%d %d",a[i]);
}

return 0;
}