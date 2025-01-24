#include<stdio.h>
void new();     // prototyping the code
void mew();

int main()
{
new();      // calling the code
mew();
return 0;
}

void new(){     //function defination
  printf("Hello! \n");  
}
void mew(){
    printf("Good bye \n");
}