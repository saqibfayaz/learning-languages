#include<stdio.h>

int main()
{
    char name[32c];
    char *p;
    printf("enter your name= ");
    scanf("%s",&name);
    p=name;
    while(putchar(*p++))
    ;
    putchar('\n');
    return(0);
}