#include<stdio.h>
#include<stdlib.h>

void showArray(int *array, int size);
void modArray(int *array, int size);

int main()
{
    int primes[] =  {2,3,5,7,11,13};
    int p;
    p=sizeof(primes)/sizeof(int);

    showArray(primes,p);
    modArray(primes,p);
    return(0);
}
void showArray(int *array, int size)
{
    int x;
    for(x=0;x<6;x++)
    printf("Element %d: %d\n",x,*(array + x));
}

void modArray(int *array, int size)
{
    int x;
    for(x=0;x<6;x++)
    
    printf("Elements of modArray number:%d  %d\n",x,*(array + x) *=2);
}