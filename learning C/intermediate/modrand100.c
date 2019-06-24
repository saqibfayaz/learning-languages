#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TIMES 100
int main()
{
    int r[TIMES],c;
    srandom((unsigned)time(NULL));
    for(c=0;c<TIMES;c++)
    r[c]=random()%100+1;
    puts("100 random numbers are");
    for(c=0;c<TIMES;c++)
    printf("%d \n",r[c],c);
    putchar('\n');

    for(c=0;c<TIMES;c++)
    r[c]=random()%100+1;
    puts("100 new random numbers are");
    for(c=0;c<TIMES;c++)
    printf("%d \n",r[c],c);
    putchar('\n');

    return(0);
}