#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define COUNT 100

int main()
{
    int r[COUNT];
    int c;

    srandom((unsigned)time(NULL));
    //initialise the array
    for(c=0;c<COUNT;c++)
    r[c]=random() % 100+1;
    //display the array of 100 random numbers
    puts("100 random numbers");
    for(c=0;c<COUNT;c++)
    printf("%d\t",r[c]);
    putchar('\n');
    
    return(0);
}