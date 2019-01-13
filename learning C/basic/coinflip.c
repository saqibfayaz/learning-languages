#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define FLIPS 1000

int main()
{
    int coin,loop,total_heads=0;
    float hpercent,tpercent;
    srandom((unsigned)time(NULL));
    for(loop=1;loop<=FLIPS;loop++)
    {
        coin = random() % 2;
        //assume 1 is head and 0 is tail
        total_heads += coin;
        if(coin)
        printf("Heads\t");
        else
        printf("Tails\t");
    }
    hpercent=(float)total_heads/FLIPS*100;
    tpercent=100.0-hpercent;
    printf("total flips:%d\n Heads: %.2f\n Tails: %.2f\n",FLIPS,hpercent,tpercent);
    
return(0);
}