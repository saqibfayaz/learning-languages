#include<stdio.h>
int main()
{
    char option;
    puts("available packages\nA - Transportation, Hotel, Meals\nB- Transportation and Hotel\nC- transportation only\n");
    puts("select your package");
    option=getchar();
    switch(option)
    {
        case 'a':
        case 'A':
        puts("you get the meanls and");
        case 'b':
        case'B':
        puts("you get the hotel and");
        case 'c':
        case 'C':
        puts("you get the transportation");
        break;
        default:
        puts("you don't get nuthin!");
    }
    return(0);
}