#include<stdio.h>
int main()
{
    char c;
    puts("which is your favourite political party?\nA for PDP\nB for NC\nC for BJP");
    puts("enter your option");
    c=getchar();
    /*
    switch(c)
    {
        case 'a':
        case 'A':
        puts("you choose PDP");
        break;
        case 'b':
        case 'B':
        puts("you choose NC");
        break;
        case 'c':
        case 'C':
        puts("you choose BJP");
        break;
        default:
        puts("try again!!!!");
    }
    */
   if(c=='a'||c=='A')puts("PDP hahaha");
   else if(c=='b'||c=='B')puts("NC lol");
   else if(c=='c'|| c=='C')puts("BJP hehehe");
   else puts("try again later");
    return(0);
}