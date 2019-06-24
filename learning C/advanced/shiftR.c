#include<stdio.h>

int main()
{
    int v,t;
    printf("give me any value and i'll cut it into half= ");
    scanf("%d",&t);
    v = t>>1;
    printf("the value is %d\n",v);
     return(0);
}