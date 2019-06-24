#include<stdio.h>

int main(int argc, char const *argv[])
{
    char names[4][3][10]={
     "Bob",     "Billy",    "Bret",
     "Dan",     "Dave",     "Don",
     "George",  "harry",    "John",
     "Mike",    "Steve",    "Vern"
    };
    int a,b;
    for(b=0;b<3;b++)
    for(a=0;a<4;a++)
      
        printf("%s\n",names[a][b]);
    return 0;
}
