#include<stdio.h>
#include<string.h>

void showPrompt(void);              //prototype
int main()
{
    char input[64];

    do
    {
        showPrompt();
        gets(input);
        puts("someday i must implement that function");
    }
    while(strcasecmp("quit",input));
    puts("Oh! Apperently I did");
    return(0);
}
void showPrompt(void)
{
    printf("What is the bidding? ");
}