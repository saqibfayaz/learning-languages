//select module
#include "lotto.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

extern int ball[BALLS];

void select(void)
{
    int numbers[RANGE];
    int c,b;
    //initialize the tracking array
    for(c=0;c<RANGE;c++)
        numbers[c]=0;

        //draw the numbers
        puts("here they come: ");
        for(c=0;c<BALLS;c++)
        {
            do
            {
                b=random()%RANGE;
            }
        
        while(numbers[b]);
        numbers[b]=1;       //number drawn
        ball[c]=b+1;        //number drawn lock
        }                   //save number drawn

}                           