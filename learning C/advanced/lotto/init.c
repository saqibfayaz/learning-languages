#include "lotto.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void init(void)
{
    //seed the randomizer
    seedRandomizer();
    //Display startup text
    puts("L O T T O P I C K U P S");
    puts("Press enter to pick up anumber");
    getchar();
}

void seedRandomizer(void)
{
    srand((unsigned)time(NULL));
}