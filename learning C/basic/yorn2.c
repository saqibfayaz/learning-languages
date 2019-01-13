#include<stdio.h>
#define FALSE 0
#define TRUE !FALSE
int main()
{
    int done;
    char ch;
    done=FALSE;
    printf("do you want me to send your net banking password to bad guys?\n");
    while(!done)
    {
        printf("enter Y or N (Y/N)?");
        ch=getchar();
        switch(ch)
        {
            case 'y':
            case 'Y':
            puts("your password is safe");
            done=TRUE;
            break;
            case 'n':
            case 'N':
            puts("ok sending your password now ............");
            done=TRUE;
            break;
            default:
            puts("you must enter Y/N!"); 
            fflush(stdin);
        }
    }

    return(0);
}
/*
#include <stdio.h> 
#define FALSE 0 
#define TRUE !FALSE 
int main() 
{
     int done;
      char ch;
       done = FALSE;
        printf("Would you like me to send your password to the bad guys?\n");
         while(!done) 
         { 
             printf("Enter Y or N (Y/N)?");
              ch = getchar();
               switch(ch)
                { 
                    case 'N':
                     case 'n':
                      printf("Well, then: your password is safe!\n");
                       done = TRUE;
                        break;
                         case 'Y':
                          case 'y':
                           printf("Okay, Sending your password!\n");
                            done = TRUE;
                             break;
                              default:
                               printf("You must enter a Y or N!\n");
                                fflush(stdin);
         } 
                 } 
                                  return(0);
}
*/
 