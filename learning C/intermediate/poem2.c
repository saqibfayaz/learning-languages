#include<stdio.h>
#include<ctype.h>

int main()
{
    char input[200];
    int x=0;

    puts("enter your favourite line but remember i\'ll crush your spaces hahaha");
    gets(input);
    while(input[x])
    {
        if(isalnum(input[x]))
        input[x]=tolower(input[x]);
        else
        input[x] = '*';
        x++;

    }
    puts(input);
    return(0);
}