#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define RANGE 50
#define BALLS 6

int main()
{
    int numbers[RANGE];
    int c,ball;

    puts("L O T T O  P I C K E R\n");

    srandom((unsigned)time(NULL));
    // initialize the array

    for(c=0;c<RANGE;c++)
    numbers[c] = 0;

    printf(" press enter to pick this weeks number");
    getchar();

    //draw the numbers

    puts("here they come: ");
    for(c=0;c<BALLS;c++)
    {
        // see if the number has been already drawn
        do{
            ball = random() % RANGE;
        }
        while(numbers[ball]);

        //Number drawn

        numbers[ball] = 1;
        printf("%2d ",ball+1);

    }
        printf("\n\nGood luck in the drawing!\n");
        return(0);
}
