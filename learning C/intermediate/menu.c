#include<stdio.h>
#include<ctype.h>

char ask(void);
int main()
{
    char key;

    printf("would you like to see menu:  ");
    key=ask();
    if (key=='Y')
    {
        puts("someday menu will appear here");
    }
    return(0);

}
char ask(void)
{
    char c;
    printf("(Y/N)? ");
    fpurge(stdin);
    c=getchar();
    if(c=='y'||c=='Y')
        return(c);
    else
        return('N');
}