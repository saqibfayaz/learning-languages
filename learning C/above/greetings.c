#include<stdio.h>
#include<stdlib.h>

int main()
{
    char first[20],last[20];
    char gratis[]="thanks";

    puts("enter your first name");
    gets(first);
    puts(gratis);
    puts("enter your last name");
    gets(last);
    puts(gratis);
    printf("pleased to meed you %s %s\n",first,last);


    return(0);
}