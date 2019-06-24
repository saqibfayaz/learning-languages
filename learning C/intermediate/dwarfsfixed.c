#include<stdio.h>
#include<string.h>

int main()
{
    char dwarfs[7][2][8]={
        "bashful", "?",
        "doc",     "?",
        "dopey",   "?",
        "grumpy",  "?",
        "sneezy",  "?",
        "sleepy",  "?"

    };
    char input[64];
    int named=0;

    puts("see if you can name all seven dwarfs: ");

    while(named<7)
    {
        if(named==1)
        printf("\nSo far you've named %i dwarfs\n",named);
        else
        printf("\nSo far you've named %i dwarfs\n",named);
        printf("enter a name:");
        gets(input);
        //check for no input
        if(strcmp(input,"")==0)
        break;

          for(int x =0;x<7;x++)
       {
          if(strcmp(input,dwarfs[x][0])==0)
            {
               if(dwarfs[x][1][0]=='!')
               printf("you already named that dwarf\n");

               else
                {
                    ("yes! %s is right.\n",input);
                    named++;
                    dwarfs[x][1][0]='!';
                }
        }

    }
       if(named==7)
       puts("you got 'em all! snow would be proud ");
       else("Try again:");
    }
       return (0);

}