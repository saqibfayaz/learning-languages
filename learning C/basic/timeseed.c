#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    long int hat;
    int loop;
    srandom((unsigned)time(NULL));
    for(loop=0;loop<100;loop++)
    {
        hat=random();
        printf("%ld\t",hat);
    }
    return(0);
}