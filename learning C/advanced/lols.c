#include<stdio.h>

int main()
{
    int start=100,end=9;
    int *examine;

    examine=&start;
    printf("%d ladies started the race but only\n",*examine);
    examine=&end;
    printf("%d ladies ended the race",*examine);

    return(0);
}