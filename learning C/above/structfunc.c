#include<stdio.h>
struct stuff
    {
        char letter ;
        int number;
    };
void showstuff(struct stuff the);

int main()
{
    char input[10];
    struct stuff my;
    
    puts("your own stuff");
    printf("enter your favourite letter:");
    my.letter=getchar();
    printf("enter your favourite number:");
    scanf("%d",&your.number);
    showstuff(my);
    return(0);
}
void showstuff(struct stuff the)
{
    printf("your favourite letter is %c\n",the.letter);
    printf("and your favourite number is %d\n",the.number);
}

