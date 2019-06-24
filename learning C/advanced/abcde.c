#include<stdio.h>

int main()
{
    int a,b,c,d,e,x;
    a=b=c=d=e=0;
    int *variables[5];

    a=1;
    b=a*2;
    c=b*3;
    d=c*4;
    e=d*5;
    
    variables[0]=&a;
    variables[1]=&b;
    variables[2]=&c;
    variables[3]=&d;
    variables[4]=&e;

    for(x=0;x<5;x++)
    printf("variable %c = %d\n",'a'+x,*variables[x]);
    return(0);
    
}