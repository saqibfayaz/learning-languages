#include <stdio.h>
int main()
{
    char a;
    int x=1;
    while(x<10)
    {
        a='A';
        while(a<'J')
        {
            printf("%d%c\t",x,a);
            a++;
        }
            putchar('\n');
            x++;
        
    }
    return(0);
}