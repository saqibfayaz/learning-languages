/*
#include<stdio.h>

int main()
{
    char string[]="love the way you lie";
    char ch='a';
    int n=0;
    while(ch!='\0')
    {
        ch=string[n];
        putchar(ch);
        n++;
    }
    putchar('\n');
    return(0);
}
*/
// or by using pointers

/*
#include<stdio.h>

int main()
{
    char string[]="love the way you lie";
    char *s;
    s=string;
    while(*s!='\0')
    {
        putchar(*s++);
        
        
    }
    putchar('\n');
    return(0);
}
*/

//shrinking it
/*
#include<stdio.h>

int main()
{
    char string[]="love the way you lie";
    char *s;
    s=string;
    while(*s)putchar(*s++);
    putchar('\n');
    return(0);
}
*/

//shrinking it ++
#include<stdio.h>

int main()
{
    char string[]="love the way you lie";
    char *s;
    //set string elements to the poiter ie initializing pointer
    s=string;
    while(putchar(*s++))
    ;
    putchar('\n');
    return(0);
}

