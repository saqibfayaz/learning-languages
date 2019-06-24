#include<stdio.h>
#include<string.h>

int main()
{
    char input[3][50];
    char guess[10][50];
    int chances=0;
    puts("lets see how much you know me");
    puts("which is my favourite colour");
    for(int c=1;c<=3;c++)
    {
     gets(input[c]);
    puts("now give the answer");
    for(chances=0;chances<=7;chances++){
     do{
         gets(guess[chances]);
     }while(strcmp(guess[chances],input[c])==0);
     if(strcmp(guess[chances],input[c])==0)
     printf("you have %d chances left",chances);

    }

    }
    return(0);
}