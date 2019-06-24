#include<stdio.h>

void underline(char *string);

int main()
{
    underline("This year's Starting Line-Up");
    return(0);
}

void underline(char *string)
{
    puts(string);
    while(*string)
    {
        putchar('=');
        string++;
    }
    putchar('\n');
}
/*

#include<stdio.h>
#include<string.h>

void underline(char *string);
void  stringLen(char *string);

int main()
{
    underline("This year's Starting Line-Up");
    stringLen("This year's Starting Line-Up");
    
    return(0);
}

void underline(char *string)
{
    puts(string);
    while(*string)
    {
        putchar('=');
        string++;
    }
    putchar('\n');
}

void stringLen(char *string)
{
 int n;
 n=strlen(string);
 printf("length of string is %d\n",n);
}
*/
