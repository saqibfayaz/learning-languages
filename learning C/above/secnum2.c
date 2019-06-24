#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void separator(int repeat, char c);
int main()
{
    srandom((unsigned)time(NULL));
    puts("here are your lucky numbers");
    separator(10,'#');
    separator(15,'*');
    separator(20,'@');
    return(0);
}

void separator(int repeat, char c)
{
    int x;
    long int r;
    for(x=0;x<repeat;x++)
    putchar(c);
    putchar('\n');
    r=random();
    printf("%ld\n",r);
}