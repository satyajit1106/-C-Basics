#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    a=b=2;
   
    c=pow(a,b);
    printf("%d \n",c);

    d=b+c;
    printf("%d \n",d);

    printf("%f \n",2.0*3.8);
    printf("%d \n",8%5);
    printf("%d \n",7/7);

    // type conversion to the integer value 
    int t = (int) 1.8989898;                    \\this is the explicit type conversion 
    printf("%d \n", t);

    // precidence question 
    int x=4*3/6*2;
    printf("%d \n",x);

    int y=5*2-2*3;
    printf("%d \n",y);

    int u=5*(2/2)*3;
    printf("%d \n",u);
    

    return 0;

}