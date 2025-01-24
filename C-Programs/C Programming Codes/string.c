#include<stdio.h>
void name(char arr[]);
int main()
{
    char firstname[]="satyajit";    //when we write the characters in the double quotes, compiler automatically adds null character
    char secondname[]=" patra";

    name(firstname);
    name(secondname);
return 0;
}
void name(char arr[]){
    for(int i=0; arr[i] != '\0';i++){
            printf("%c",arr[i]);
    }
}