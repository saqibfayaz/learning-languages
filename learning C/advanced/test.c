#include<stdio.h>
#include<time.h>

int main()
{
    struct tm *t;
    time_t now;
    time(&now);
    t=localtime(&now);
    printf("%d\n",t->tm_hour);
    
    return(0);

}
