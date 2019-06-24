/*
#include<stdio.h>

void peasoup(int green);

int main()
{
    int turn=13;
    int *head;
    head=&turn;

    peasoup(*head);
    return(0);
}

void peasoup(int green)
{
    while(green--)
    puts("Bleach!");
}


*/
/*
//or by using pointer as function's input

#include<stdio.h>

void peasoup(int *green);

int main()
{
    int turn=13;
    peasoup(&turn);
    return(0);
}

void peasoup(int *green)
{
    while((*green)--)
    puts("Bleach!");
}
*/

//change pointer value in func and it will change globally
#include<stdio.h>

void peasoup(int *green);

int main()
{
    int turn=13;
    peasoup(&turn);
    printf("ooh now the turn is %d\n",turn);
    peasoup(&turn);
    return(0);
}

void peasoup(int *green)
{
    while((*green)--)
    puts("Bleach!");
    *green=13 * 51 + 3;
}
