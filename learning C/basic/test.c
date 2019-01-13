#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define RANGE 100
int main()
{
    int guess,number;

    srandom((unsigned)time(NULL));

    puts("guessing game");

    number=random() % RANGE +1;//value from 1 to RANGE

    printf("i'm thinking of a number from 1 to %d.\n",RANGE);
    printf("can you guess what number is it?\n");

    for(int i=1;i<=6;i++)
    {
        printf("Enter guess: ");
        scanf("%d",&guess);
        if(guess==number)
        {
            puts("you got it!");
            break;
        }
        else if(guess<number)
        puts("too low!");
        else
        puts("too high!");

    }
    printf("the number was %d\n",number);
    return(0);

}