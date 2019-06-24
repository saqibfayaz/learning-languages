#include<stdio.h>
#include<string.h>

int main()
{
    char dwarfs[7][8]={
        "bashful",
        "doc",
        "dopey",
        "grumpy",
        "happy",
        "sneezy",
        "sleepy"
    };
    char input[64];
    int named=0;


    puts("See if you can name all seven dwarfs:");
    while(named<7)
    {
        if(named==1)
        printf("\nSo far you've named %d dwarf.\n",named);
        else
        printf("\nSo far you've named %d dwarf.\n",named);
              printf("Enter a name: ");
              gets(input);

        // check for no input
        if(strcmp(input,"")==0)
            break;
        for(int x=0;x<7;x++)
        {
            if(strcasecmp(input,dwarfs[x])==0)
            {
                    printf("yes! %s is right.\n",input);
                    named++;
            }
        }
    }
    return(0);
}