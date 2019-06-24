#include<stdio.h>
#include<string.h>
#include<ctype.h>

void showline(void);
void dashes(void);

char line[81];   //global variable
int linelen;    //global variable
int main()
{
    puts("enter a line of text:");
    gets(line);
    linelen = strlen(line);         //calculating the line length of string so that string can be decorated with dashes

    puts("here is the line you entered");
    showline();
    return(0);
}
void showline(void)
{
    char c;
    int x;
    dashes();               //func using another func
    do{
        c=line[x];
        c=toupper(c);
        line[x]=c;
        x++;
    }while(c);
    puts(line);

    dashes();
}
void dashes(void)
{
    int x;
    for(x=0;x<linelen;x++)
    putchar('-');
    putchar('\n');
}
