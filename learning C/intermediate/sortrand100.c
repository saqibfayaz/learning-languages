

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100
int main()
{
    int r[SIZE];
    int a,b,c,temp;
    srandom((unsigned)time(NULL));
    puts("here are unsorted one's");
    for(c=0;c<SIZE;c++)
    {
    r[c]=random()%100+1;
    printf("%3d,",r[c]);
    }
    putchar('\n');
    
    
    
    
    
    for(a=0;a<SIZE-1;a++)
    for(b=a+1;b<SIZE;b++);
      if(r[a] > r[b])
      {
       temp=r[b];
       r[b]=r[a];
       r[a]=temp;
      }
      printf("press enter to see the sorted list\n");
      getchar();
      for(c=0;c<SIZE;c++)
       printf("%3d,",r[c]);
       putchar('\n');
      

    return(0);
}
