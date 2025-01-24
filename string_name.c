//basic printing of the array by taking the input and without taking the input 

#include<stdio.h>
void printname(char arr[]);
int main()
{
    // char firstname []="satyajit";     // without taking the input form the user 
    // char lastname []="patra";

    // printname(firstname);
    // printname(lastname);

    // char name[50];                       // with taking the input from the user
    // printf("enter the name \t");         // cannot take the multiword input 
    // scanf("%s",name);
    // printf("your name is %s",name);


    char str[100];
    fgets(str,100,stdin);               //it is the standard notation of fgets   (name ,size, stdin)
    puts(str);

return 0;
}   
void printname(char arr[]){
    for(int i=0;arr[i]!='\0';i++)
    {
        printf("%c",arr[i]);
    }
    printf("\t");
}