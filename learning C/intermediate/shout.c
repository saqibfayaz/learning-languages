#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char input[100];

    char ch;
    int x=0;
    puts(" give me input and i will change it into uppercase");
    gets(input);
    do{
        ch=input[x];
        ch=toupper(ch);
        input[x]=ch;
        x++;
    }while(ch);
    puts(input);
    putchar('\n');
    
    return(0);
}
