#include<stdio.h>

char *reverse(char *string);

int main()
{
    char input[64];
    char *backwards;
    printf("Enter some text: ");
    gets(input);
    backwards=reverse(input);
    printf("that would be \"%s\" backwards!\n",backwards);
    return(0);
}


char *reverse(char *string)
{
    static char back[64];
    int len = 0;
    int x;

    //Get the strings length and set the last/first char
    while(*string)
    {
        len++;
        string++;
    }
    string--;           //backup over null

    //Fill the array

    for(x=0;x<len;x++)
    {
        back[x]=*string;
        string--;
    }
    back[x]='\0';
    return(back);
}