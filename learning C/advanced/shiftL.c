#include<stdio.h>

int main()
{
    int v,t,r;
    printf("give me any value = ");
    scanf("%d",&t);
    for(r=1;r<=8;r++)
    {
    v = t<<r;
    printf("%d << %d =%d \n",t,r,v);
    }
     return(0);
}