#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int hat,seed;
    int loop;
    printf("enter the seed value: ");
    scanf("%ld",&seed);
    srandom(seed);
    for(loop=0;loop<100;loop++)
    {
        hat=random();
        hat%=11;
        printf("%5ld\t",hat);
    }
    return(0);
}