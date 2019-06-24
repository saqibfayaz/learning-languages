#include<stdio.h>
#define LINE_LENGTH 40
int main()
{
    struct oz{
        char actor[30];
        int age;
        char role[30];
    };
    int line,x;
    struct oz cast[6]={
        "Judy Garland",17,"Dorothy",
        "ray Bogler",35,"Scarecrow",
        "Bert Lahr",44,"Cowardly Lion",
        "Jack Haley",40,"Tin Woodsman",
        "Margaret Hmilton",37,"Wicked witch",
        "Frank Morgan",49,"The Wizard"
    };
    puts("Wizards of Oz database!");
    printf("%-18s\t%3s\t%-15s\n","Actor","Age","Role");
    for(line=0;line<LINE_LENGTH;line++) putchar('-');
    putchar('\n');

    for(x=0;x<6;x++)
    printf("%-18s\t%3d\t%-15s\n",cast[x].actor,\
    cast[x].age,\
    cast[x].role);
    return(0);
}