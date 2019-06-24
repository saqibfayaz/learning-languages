//it was not meant to work because string is just a pointer variable not any 
//chunk of memory in which my strcpy text was meant to  be saved..
/*
#include<stdio.h>
#include<string.h>

int main()
{
    char *string;

    strcpy(string,"ladinta na pu sitro pai\n");
    printf("%s\n",string);
    return(0);
}
*/

/*
//by using malloc function to allocate memory for string pointer

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char *string;
    string=(char *)malloc(50);
    if(string==NULL)
    {
        puts("Not enough space");
        return(0);
    }
    strcpy(string,"ladita la nitso pika");
    printf("%s\n",string);
    return(0);
    
}
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char string[50];
    gets(string);
    int size;
    size=sizeof(string);
    char *newstring;
    newstring=(char *)malloc(size);
    newstring=string;
    printf("output= %s\n",newstring);
    
    return(0);

}
