 #include<stdio.h>
#include<string.h>
#define LINE_LENGTH 40
int main()
{
    struct oz{
        char actor[18];
        int age;
        char role[16];
    };
    struct oz cast[6];
    struct oz temp;
    int line,x,a,b;

    strcpy(cast[0].actor,"Judy Garland");
    cast[0].age=17;
    strcpy(cast[0].role,"Dorothy");

    strcpy(cast[1].actor,"Ray Bogler");
    cast[1].age=35;
    strcpy(cast[1].role,"Scarecrow");

    strcpy(cast[2].actor,"Bert lahr");
    cast[2].age=44;
    strcpy(cast[2].role,"Cowardly Lion");

    strcpy(cast[3].actor,"Jack Haley");
    cast[3].age=40;
    strcpy(cast[3].role,"Tin Woodsman");

    strcpy(cast[4].actor,"Margaret hamilton");
    cast[4].age=37;
    strcpy(cast[4].role,"Wicked Witch");

    strcpy(cast[5].actor,"Frank Morgan");
    cast[5].age=49;
    strcpy(cast[5].role,"The Wizard");
 
        for(a=0;a<6-1;a++)
         for(b=a+1;b<6;b++)
          if(cast[a].age>cast[b].age)
          {
              temp=cast[a];
              cast[a]=cast[b];
              cast[b]=temp;
          }
    


    

    puts("wizards of oZ database!");

    printf("%-18s\t%3s\t%-15s\n","Actor","Age","Role");
    for(line=0;line<LINE_LENGTH;line++) putchar('-');
    putchar('\n');

    for(x=0;x<6;x++)
    printf("%-18s\t%3d\t%-15s\n",cast[x].actor,\
    cast[x].age,\
    cast[x].role);
    return(0);
}