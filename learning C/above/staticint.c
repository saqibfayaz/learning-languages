#include<stdio.h>
#include<ctype.h>

void request(void);

int main()
{
    char ch;
    do
    {
        puts("\nMain Menu\n========");
        printf("press 1 enter new request,Q to quit: ");
        ch=toupper(getchar());
        fpurge(stdin);
        switch(ch)
        {
            case '1':
            request();
            break;
            case 'Q':
            puts("quitting now");
            return(0);
            default:
            puts("\nNaughty Input");
        }
    }while(ch!='Q');
}
void request(void)
{
    static int input;
    puts("\\New request!");
    printf("\tPrevious Request was\"%d\"\n",input);
    printf("\tEnter new request: ");
    scanf("%d",&input);
    puts("thank You");
}