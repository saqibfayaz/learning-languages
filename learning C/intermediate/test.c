#include<stdio.h>
#include<string.h>

int main()
{
    struct person
    {
        char name[30];
        int age;
        union
        {
            struct
            {
                char game[25];
                int jersey_numb;
            }sports;
            struct
            {
                char instrument[25];
                int years_of_practice;
            }music;
            struct
            {
                int hours_per_week;
            }television;
        }hobby;
    };
    struct person a;
    struct person b;
    struct person c;

    strcpy(a.name,"saqib");
    a.age=23;
    strcpy(a.hobby.music.instrument,"Guitar");
    a.hobby.music.years_of_practice=4;

    strcpy(b.name,"zahoor");
    b.age=24;
    strcpy(b.hobby.sports.game,"cricket");
    b.hobby.sports.jersey_numb=66;

    strcpy(c.name,"ukaa masi");
    c.age=20;
    c.hobby.television.hours_per_week=90;

    printf("person A is %s, who is %d years old\n",a.name,a.age);
    printf("%s has played %s for %d years\n",a.name,a.hobby.music.instrument,a.hobby.music.years_of_practice);

    printf("person B is %s, who is %d years old\n",b.name,b.age);
    printf("%s loves %s sports and his favourite jersey number is %d \n",b.name,b.hobby.sports.game,b.hobby.sports.jersey_numb);

    printf("person C is %s, who is %d years old\n",c.name,c.age);
    printf("%s loves to watch television and she watches around %d hours a week\n",c.name,c.hobby.television.hours_per_week);

    return(0);



}