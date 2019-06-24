#include<stdio.h>

void *greatest(int a, int b, int c);

int main()
{
    printf("Enter your favourite numbers\n");
    int first,second,third;
    printf("1st = ");
    scanf("%d",&first);
    printf("Second = ");
    scanf("%d",&second);
    printf("Third = ");
    scanf("%d",&third);
    int *n;
    n=greatest(first,second,third);
    printf("greatest is %d\n",*n);
}

void *greatest(int a, int b, int c)
{
    int *p;
    if(a>b && a>c)p=&a;
    else if(b>a && b>c)p=&b;
    else p=&c;
    return(p);
}
