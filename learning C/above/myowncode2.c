#include<stdio.h>
#include<string.h>


int main()
{
    char names[7][8]={
        "saqib",
        "furqan",
        "danish",
        "umar",
        "zahoor",
        "waseem",
        "fayaz"
    };
    int correct=0;
    char input[64];

    puts("lets see how much you know me, tell me my 7best friends names");
    while(correct<7)
    {
    if(correct==1)
        printf("\nyou named %d names correct\n",correct);
     else
        printf("you named %d names correct\n",correct);
        puts("enter a name");
        gets(input);
    
    if(strcmp(input,"")==0)
    break;
    for(int c=0;c<=7;c++)
    {
        if(strcmp(input,names[c])==0)
        {
            printf("yes %s is right !!!!\n",input);
            correct++;
        }
    }

    }
    return(0);
}