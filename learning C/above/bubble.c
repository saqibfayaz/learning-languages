#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TIMES 100

int main()
{
    int r[TIMES];
    int a,b,c,temp;
     
     srandom((unsigned)time(NULL));
     printf("your  unsorted list");
     for(c=0;c<TIMES;c++)
     {
        r[c]=random()%100+1;
        printf("%d, ",r[c]);
     }
     putchar('\n');
     for(a=0;a<TIMES-1;a++)
        for(b=a+1;b<TIMES;b++)
             if(r[a]>r[b])
             {
                temp = r[b]; 
                r[b] = r[a]; 
                r[a] = temp;

             }
             for(c=0;c<TIMES;c++)
             {
                 printf("%d, ",r[c]);
             }
             putchar('\n');
    return(0);
}