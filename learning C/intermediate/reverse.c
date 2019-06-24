#include<string.h>
#include<stdio.h>

int main()
{
    char input[64];
    int size,c;
      printf("enter a common earth phrase:\n");
         gets(input);
      puts("here is how we say that on our backward planet");
         size=strlen(input);
         for(c=size-1;c>=0;c--)
           putchar(input[c]);
      putchar('\n');
      printf("%d\n",size);
     
    return(0);
}