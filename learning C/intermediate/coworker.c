#include<stdio.h>
int main()
{
    float iq[] = {54.3,37.3,77,97.3,59.3};
    for(int worker=0;worker<5;worker++)
    {
        printf("iq of worker %d is \"%f\"\n",worker+1,iq[worker]);
    }
    puts("king in the north");
    return(0);
}