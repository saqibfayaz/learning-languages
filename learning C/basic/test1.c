#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define FALSE 0
#define TRUE !FALSE
#define OMEGA ('z'-'a')

int main()
{
  int done;
  long int r;
  char alpha;
  srandom((unsigned)time(NULL));
  done=FALSE;
  while(!done)
  {
    r=random() %OMEGA;
    alpha='a'+(char)r;
    if(alpha=='q') done=TRUE;
    putchar(alpha);
  }
  putchar('\n');
  return(0);
}
