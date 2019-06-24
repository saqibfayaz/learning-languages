#include<stdio.h>

typedef struct stuff
{
     char letter;
     int number;
}junk;
void showstuff(junk the);

int main()
{
    char input[10];
    junk my;

    puts("your own stuff");

    printf("enter your favourite letter; ");
    my.letter=getchar();

    printf("enter your favourite number: ");
    scanf("%d",&my.number);
    showstuff(my);

    return(0);
}
void showstuff(junk the)
{
    printf("your favourite letter is %c\n",the.letter);
    printf("and your favourite number is %d\n",the.number);
}