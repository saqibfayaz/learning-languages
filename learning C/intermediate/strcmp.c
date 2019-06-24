#include<stdio.h>
#include<string.h>
int main()
{
    char password[10];
    char check[]="lullaby";
    
    puts("enter the password");
    gets(password);
    
    if(strcasecmp(password,check)==0)
        puts("access granted");
    else

        puts("try again");
    return(0);
}