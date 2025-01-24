#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2,real,imaginary,disc;
    printf("enter the value of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc==0){
        printf("roots ara real and equal \n");
        r1=r2= -b/2*a;
        printf("root 1=%f and root 2=%f",r1,r2);
    }
    else if(disc>0){
        printf("roots are real and distinct \n");
        r1= -b+sqrt(disc)/(2*a);
        r2= -b-sqrt(disc)/(2*a);
        printf("root 1=%f and root 2=%f",r1,r2);
    }
    else if(disc<0){
        printf("roots are imaginary  \n");
        real= -b/(2*a);
        imaginary= sqrt(-disc)/(2*a);
        printf("root 1= %f+%fi and root 2=%f-%fi",real ,imaginary);
    }
    return 0;
}