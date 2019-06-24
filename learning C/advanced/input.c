#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char *input;
    int size;
    // Allocate "enough memory
    input=(char *)malloc(50876);

    printf("Enter Some text: ");
    gets(input);
    
    //resize input bigger to save space

    size=strlen(input)+1;
    if(!realloc(input,size))
    {
        puts("unable to reallocate memory");
        return(0);
    }
    puts("Memory reallocation successful");
    printf("String is: %s\n",input);
    printf("%d is new size\n",size);
    free(input);
    printf("input freed\n");

    return(0);
}