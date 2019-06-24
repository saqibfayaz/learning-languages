/*

#include<stdio.h>
#include<string.h>

#define SIZE 10

int main()
{
    char input[SIZE][64];

    char *isort[SIZE];
    char *temp;
    int x,a,b;

    //get the size number of strings

    printf("Enter %d types of fruits:\n",SIZE);
    for(x=0;x<SIZE;x++)
    {
        printf("#%d: ",x+1);
        gets(input[x]);
        isort[x]=input[x];
    }
    //sort the strings via pointers
    for(a=0;a<SIZE-1;a++)
      for(b=a+1;b<SIZE;b++)
         if(strcasecmp(isort[a],isort[b]) > 0)
         {
             temp=isort[a];
             isort[a]=isort[b];
             isort[b]= temp;
         }
    //sprted list

    printf("Sorted list: \tOriginal List:\n");
    for(x=0;x<SIZE;x++)
    printf("%12s\t%12s\n",isort[x],input[x]);
    return(0);
}

*/

#include<stdio.h>
//#include<string.h>

#define SIZE 10

int main()
{
    int input[SIZE];

    int *isort[SIZE];
    int *temp;
    int x,a,b;

    //get the size number of integers

    printf("Enter %d numbers:\n",SIZE);
    for(x=0;x<SIZE;x++)
    {
        printf("#%d: ",x+1);
        scanf("%d",&input[x]);
        isort[x]=&input[x];
    }

    //sort the numbers via pointers
    for(a=0;a<SIZE-1;a++)
      for(b=a+1;b<SIZE;b++)
         if(*isort[a]>*isort[b])
         {
             temp=isort[a];
             isort[a]=isort[b];
             isort[b]= temp;
         }

    //sprted list
    printf("Sorted numbers: \tOriginal List:\n");
    for(x=0;x<SIZE;x++)
    printf("%d\t%d\n",*isort[x],input[x]);
    return(0);
}

