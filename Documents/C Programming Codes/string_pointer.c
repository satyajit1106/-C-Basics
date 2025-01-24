#include<stdio.h>
#include<string.h>
int countlength(char name[]);
int countcharcter(char name[]);
int main()
{
    // char *name="Satyajit Patra";        //using the pointer we can modify the value of the string
    // puts(name);
    // name="satyajit";
    // puts(name);

    char name[1000];
    printf("enter the name");
    fgets(name,1000,stdin);
    puts(name);
    printf("%d \n",countlength(name));          //measuring the length of the string without using inbuilt function
    printf("%d \n",countcharcter(name));        //measuting the number of itteration of the character s

    char firstname[1000]="Satyajit";
    printf("%lu",strlen(firstname));            //measuring the length of the string using the inbuilt function
    

return 0;
}
int countcharcter(char name[]){             //counting the number of s in string
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        if(name[i]=='s'){
            count++;
        }
    }
    return count;
}



int countlength(char name[]){              //counting the number of elements in the array
    int count=0,i;
    for( i=0; name[i]!='\0';i++){
        count++;
    }
    return count-1;    //because in the end the count function is initiated with the i++ and increase the value of count
}