/*
#include<stdio.h>
int main()
{
    char ch;
    printf("Press ~ and  Enter to stop");
    while(ch!='~')
    {
        ch=getchar();
    }
    return(0);
}
*/

#include<stdio.h>
int main()
{
   puts("Press ~ and  Enter to stop");
    while(getchar() != '~')
    ;
    return(0);
}
