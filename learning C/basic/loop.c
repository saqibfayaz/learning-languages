#include<stdio.h>
int main()
{
    int c=10;
    while(c<0)
    {
        printf("%d\n",c);
        c--;
    }
    return(0);
}



//or like this
/*
#include<stdio.h>
int main()
{
    int c=0;
    while(c>0)
    printf("%d\n",c--);
    return(0);
}
*/