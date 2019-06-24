#include<stdio.h>
#define CENT_PER_INCH 2.54

int main()
{
    union measure
    {
        float centimeters;
        int inches;
    };
    union measure you;
    union measure uka;
    uka.inches=70;
    printf("uka is %d inches tall\n",uka.inches);
    printf("what is your height mate=  ");
    scanf("%d",&you.inches);

    you.centimeters=CENT_PER_INCH*(float)you.inches;
    uka.centimeters=CENT_PER_INCH*(float)uka.inches;
    printf("you are %d centimeters tall\n",you.inches);
    printf("uka is %d centimeters tall\n",uka.inches);
    return(0);
}