#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int d1;
    srandom((unsigned)time(NULL));
    for(int i=0;i<16;i++)
    {
        d1=random()%6+1;
        printf("you got value of d1= %d\n",d1);
    }
      return(0);  
}