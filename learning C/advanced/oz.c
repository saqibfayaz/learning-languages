//one way
/*

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define LINE_LENGTH 40

int main()
{
    struct cast{
        char actor[18];
        int age;
        char role[16];
    };
    struct cast *star;//created structure pointer
    int line;

    //Get memory chunk;
    star=(struct cast *)malloc(sizeof(struct cast));

    if(star == NULL)
    {
        puts("Memory allocation failed");
        return(0);
    }
    strcpy(star->actor,"Judy Garland");
    star->age=17;
    strcpy(star->role,"Dorothy");

    puts("Wizard of Oz Database!\n");

    //draw the table heading
    printf("%-18s %3s  %-15s\n","Actor","Age","Role");
    for(line=0;line<LINE_LENGTH;line++)putchar('-');
    putchar('\n');

    //display the data
    printf("%-18s %3d   %-15s\n",star->actor,star->age,star->role);
    return(0);
}

*/
//other way

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define LINE_LENGTH 40

int main()
{
    struct cast{
        char actor[18];
        int age;
        char role[16];
    };
    typedef struct cast oz;//created structure pointer
    oz *star;
    int line;

    //Get memory chunk;
    star=(oz *)malloc(sizeof(oz));

    if(star == NULL)
    {
        puts("Memory allocation failed");
        return(0);
    }
    strcpy(star->actor,"Judy Garland");
    star->age=17;
    strcpy(star->role,"Dorothy");

    puts("Wizard of Oz Database!\n");

    //draw the table heading
    printf("%-18s %3s  %-15s\n","Actor","Age","Role");
    for(line=0;line<LINE_LENGTH;line++)putchar('-');
    putchar('\n');

    //display the data
    printf("%-18s %3d   %-15s\n",star->actor,star->age,star->role);
    return(0);
}