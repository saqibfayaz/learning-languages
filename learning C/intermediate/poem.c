#include<stdio.h>
#include<ctype.h>

int main()
{
    char input[200];
    int c,letters,spaces;
        c=letters=spaces=0;
        puts("write your favourite lines");
        gets(input);

        while(input[c])
        {
            if(isspace(input[c]))
            spaces++;
            if(isalpha(input[c]))
            letters++;
            c++;
        }
        printf("that sentence had \"%d\" LETTERS\nand \"%d\" SPACES\n",letters,spaces);
    return(0);
}