#include<stdio.h>

float baby(float food);

int main()
{
    float input,output;

    printf("enter quantity you plan on feeding baby= ");
    scanf("%f",&input);
    output=baby(input);

    printf("according to the computer baby will produce\n");
    printf("%.2f material as output\n",output);
}
float baby(float food)
{
    float poop;
    poop=1.217*food;
    return(poop);
}