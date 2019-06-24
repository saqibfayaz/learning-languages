#include<stdio.h>

int main()
{
    int primes[]={2,3,5,7,11,13,17,19,23,29};

    for(int n=0;n<10;n++)printf("%d\t",primes[n]);
    putchar('\n');


}
/*
or we can use pointers like this

#include<stdio.h>

int main()
{
    int primes[]={2,3,5,7,11,13,17,19,23,29};

    int *numbs;
    numbs=primes;
    for(int n=0;n<10;n++)
    {
        printf("%d\t",*numbs);
        numbs++;
    }
    return(0);
}
*/