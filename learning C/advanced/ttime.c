#include<stdio.h>
#include<time.h>

int main()
{
    struct tm *t;
    time_t now;
    time(&now);
    t=localtime(&now);
    if((t->tm_hour)>12)
    {

    printf("its now %d:%02d:%02d PM\n",t->tm_hour-12,t->tm_min,t->tm_sec);
    }
    else
    printf("its now %d:%02d:%02d AM\n",t->tm_hour-12,t->tm_min,t->tm_sec);

    
    return(0);
}