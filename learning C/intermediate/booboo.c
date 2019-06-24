#include<stdio.h>

int main()
{
    char yours[20];
    char mine[20];
    int x=0;
    puts("what is your name");
    gets(yours);
    while(mine[x] = yours[x])
        x++;
    
    printf("woh your name is %s which is same as mine %s\n",yours,mine);
  return(0);
}
/*
#include <stdio.h>
 int main()
  {
       char yours[25];
        char mine[25];
         int x = 0;
          printf("What is your name?");
           gets(yours);
            while(mine[x] = yours[x]) 
            x++; 
            printf("My name is %s just like your name is %s!\n", mine,yours);
             return(0);
              }

*/
