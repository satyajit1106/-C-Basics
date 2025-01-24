#include<stdio.h>
int main()

// to find which day of the week it is by taking numbers as the input 

{
    int day;

   printf("enter the day from (1-7)");
   scanf("%d",&day);

   switch (day)
   {
        case 1: printf("monday \n");
        break;
        case 2: printf("tusday \n");
        break;
        case 3: printf("wednesday \n");
        break;
        case 4: printf("thursday \n");
        break;
        case 5: printf("friday \n");
        break;
        case 6: printf("saturday \n");
        break;
        case 7: printf("sunday \n");
        break;

        default : printf( "no such value exist");

        return 0;
        
   } 

}