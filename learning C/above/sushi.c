#include<stdio.h>
#include<stdlib.h>

int main()
{
    char phrase[] = "sushi is mooshi";
    char ch;
    int x;

    puts(phrase);
    phrase[5]='-', phrase[8]='-';
    puts(phrase);
    
    return(0);
}