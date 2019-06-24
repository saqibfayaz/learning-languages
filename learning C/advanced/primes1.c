#include<stdio.h>

int main()
{
    int primes[]={2,3,5,7,11,13,17,19,23,29};
    int *fifth,*seventh,*arr;
    arr=primes;
    //fifth=&primes[4];
    //seventh=&primes[6];

    printf("the fifth prime number is %d\n",*(arr+4));
    printf("the seventh prime number is %d\n",*(arr+6));
        
    return(0);

}