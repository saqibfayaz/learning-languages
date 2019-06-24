//bubble sort program
#include<stdio.h>
int main()
{
    int lotto[]={22,11,56,19,2,67};
    int c,a,b,temp;
    puts("here are your unsorted numbers");
    for(c=0;c<6;c++)
    printf("%2d,  ",lotto[c]);
    putchar('\n');

    // sort the array
    for(a=0;a<5;a++)
     for(b=a+1;b<6;b++)
     if(lotto[a] < lotto[b])
     {
         temp=lotto[b];
         lotto[b]=lotto[a];
         lotto[a]=temp;

         

     }
     //result
     puts("here is the sorted list");
     for(c=0;c<6;c++)
     printf("%2d,  ",lotto[c]);
     putchar('\n');

    return(0);
}