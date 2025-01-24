#include<stdio.h>
void indian();
void french();

int main()
{char c;

    printf("enter the name of the country i/f \n ");
    scanf("%c",&c);
    if(c=='i'){
       indian();
        return 0;
    }
    else if(c=='f'){
        french();
        return 0;
    }
        
    

return 0;
}


void indian(){
    printf("Namaste! \n");
}
void french(){
    printf("Bonjour");
}