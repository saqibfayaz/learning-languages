#include<stdio.h>

int main()
{
    char input[10];

    struct stuff
    {
        char letter;
        int number;
    }my,your;
   
     puts("Your own stuff");

     printf("Enter your favourite letter: ");
     my.letter=getchar();
     fpurge(stdin);
     printf("Enter your favourite number: ");
     scanf("%d",&my.number);
     fpurge(stdin);

      printf("Enter your favourite letter: ");
     your.letter=getchar();
     fpurge(stdin);
     printf("Enter your favourite number: ");
     scanf("%d",&your.number);
     

     printf("your favourite letter is %c \n",my.letter);
     printf("and your favourite number is %d\n",my.number);
     printf("your favourite letter is %c \n",your.letter);
     printf("and your favourite number is %d\n",your.number);
     
    return(0);
}

/*something is wrong here i mean standard input is not clearing itself fpurge(); //////
     printf("Enter your favourite letter: ");
     your.letter=getchar();
     printf("Enter your favourite number: ");
     scanf("%d",&your.number);*/


     //solved = input stream was not clearing ie there 
     //was some buffer value that needed to be cleared by fpurge vola