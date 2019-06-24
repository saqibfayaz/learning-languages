#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void seperator(void);

int main()
{
    long int r;
    srandom((unsigned)time(NULL));
    puts("here are today's secret numbers values: ");

    seperator();
    r=random();
    printf("%ld\n",r);

    seperator();
    r=random();
    printf("%ld\n",r);

    seperator();
    r=random();
    printf("%ld\n",r);return(0);

}
void seperator(void)
{
int r ;
for(r=0;r<10;r++)putchar('*');
putchar('\n');
}
