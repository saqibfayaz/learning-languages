/*
#include<stdio.h>

int main()
{
    char string[]="la la loby la ti la";
    char *s;
    //initialise pointer
    s=string;
    puts(s);
    return(0);
}
*/

//or have some fun
#include<stdio.h>

int main()
{
    char string[]="Hata! Kata! Sata! Kata! Mata! Kata! Pee!";
    char *s;
    //initialise pointer
    s=string;
    while(*s)
    {
        puts(s);
        s++;
    }
    return(0);
}
