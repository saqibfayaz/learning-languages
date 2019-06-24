#include<stdio.h>
int main()
{
    short int array[]={2,3,4,5,7};
    int *pa;
    int x;
    for(x=0;x<5;x++)
    {
        pa=&array[x];
        printf("array[%d] is at %p with value = %d\n",x,pa,array[x]);
    }
    pa=array;
    for(x=0;x<5;x++)
    {
        printf("array[%d]is at %p\n",x,pa);
        pa++;
    }
    return(0);
}