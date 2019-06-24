#include<stdio.h>
#include<string.h>
int main()
{
    char command[50];
    char response[]="you think i know how to ";
    char new[100];
    while(strcasecmp(command,"quit"))
    {
        printf("C:\\>");
        gets(command);
        strcpy(new,response);
        strcat(new,command);
        strcat(new,"?");
        puts(new);
    }
        puts("well,maybe i do.....\n");
    return(0);
}