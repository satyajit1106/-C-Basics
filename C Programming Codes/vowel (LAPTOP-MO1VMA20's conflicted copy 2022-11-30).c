// in the first condition we use the if,else if loop to find the vowels in the alphabetical letters input .

#include<stdio.h>
int main()
{
       char c;
    // printf("enter the alphabet\n");S
    // scanf("%c",&c);
    
    // if (c=='a'){
    //     printf("it is vowel");
    // }
    // else if (c=='e'){
    //     printf("it is vowel");
    // }
    // else if (c=='i'){
    //     printf("it is vowel");
    // }
    // else if (c=='o'){
    //     printf("it is vowel");
    // }
    // else if (c=='u'){
    //     printf("it is vowel");
    // }
    // else{
    //     printf("it is consonent");
    // }

// here we use the switch condition 

    printf("enter the alphabet : \n ");
    scanf("%c",&c);

    switch (c){
        case 'a' :printf("it is vowel");
            break;
        case 'e' :printf("it is vowel");
            break;
        case 'i' :printf("it is vowel");
            break;
        case 'o' :printf("it is vowel");
            break;
        case 'u' :printf("it is vowel");
            break;
        default : printf("it is consonent");
            break;


    }
    return 0;
}