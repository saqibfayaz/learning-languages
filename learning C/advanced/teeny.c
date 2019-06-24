#include<stdio.h>

int main()
{
    int teeny;
    int *t;
    //initialize variables;
    teeny=1;
    t=&teeny;
    
    //use and abuse variables
    printf("variable teeny= %d\n",teeny);
    printf("variable t =%p\n",t);
    printf("variable *t= %d\n",*t);

    teeny=4;
    t=&teeny;
    *t=22;
    
    //use and abuse variables
    printf("variable teeny= %d\n",teeny);
    printf("variable t =%p\n",t);
    printf("variable *t= %d\n",*t);
    return(0);
}