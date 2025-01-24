#include<stdio.h>
#include<stdlib.h>
int main()
{
     FILE *the_file=fopen("C:\\Users\Satyajit Patra\Dropbox\PC\Desktop\Booknew.csv","r");
     if(the_file==NULL);
     {
        perror("unable to open the file.");
        exit(1);
     }
    char line[200];
    while(fgets(line,sizeof(line),the_file ))
    {
        char *token;
        token=strtol(line, ',');

        while(token!=NULL){
            printf("%c",token);
            token=strtol(NULL, ',');
        }
        printf("\n");
    }
return 0;
}