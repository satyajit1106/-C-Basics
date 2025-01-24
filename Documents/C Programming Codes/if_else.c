#include<stdio.h>
int main()
{   
    int age;
    printf("enter the age of the person :");
    scanf("%d",&age);
    
    if (age>=18){
        printf("Adult and can vote");
    }

    else if(age>8 && age<18){
        printf("Teenage and can't vote");
    }

    else if(age<8){
        printf("infant and goes to school");
    }

    return 0;
}