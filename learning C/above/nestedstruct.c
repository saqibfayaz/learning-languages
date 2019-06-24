#include<stdio.h>
#include<string.h>
int main()
{
    struct date{
        int year;
        int month;
        int day;
    };
    struct family{
        char name[20];
        struct date birthday;
    }me;
    strcpy(me.name,"ruksana");
    me.birthday.year=1995;
    me.birthday.month=03;
    me.birthday.day=17;

    printf("%s has birthday on %d-%d-%d\n",me.name,me.birthday.day,me.birthday.month,me.birthday.year);
    return(0);

}