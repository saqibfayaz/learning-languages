#include<stdio.h>
#include<string.h>

void showline(void);
void dashes(char design);

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
    dashes('p');               //func using another func
    puts(line);
    dashes('p');
}
void dashes(char design)
{
    int x;
    for(x=0;x<linelen;x++)
    putchar(design);
    putchar('\n');
}