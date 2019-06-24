#include<stdio.h>

int main()
{
    int numbs[8];
    int *c;
    c=numbs;
    for(int n=0;n<8;n++)
    {
        *(c+n)=(n+1)*100;
        printf("numb[%d] = %d\n",n,*(c+n));
        
    }
    return(0);
}