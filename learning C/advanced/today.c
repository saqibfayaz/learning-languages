#include<stdio.h>
#include<time.h>

int main()
{
    time_t now;
    now=time(NULL);
    time(&now);
    printf("its now %s\n",ctime(&now));
    return(0);
}