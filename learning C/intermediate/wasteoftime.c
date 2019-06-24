#include<stdio.h>
#include<ctype.h>

int main()
{
    char address[160];
    int c,numbers;
    c=numbers=0;

    puts("enter your address");
    gets(address);

    while(address[c])
    {
        if(isdigit(address[c]))
        numbers++;
        c++;
    }
    printf("you have %d digits onyour address\nc",numbers);

}