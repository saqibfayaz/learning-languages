#include<stdio.h>

int main()
{
    float duration;
    float distance=378921;
    float speed=140;
    float *d;
     duration=distance / speed;

     d=&distance;
     printf("the moon is %.2f km away\n",*d);
     d=&speed;
     printf("traveling at %.2f kph, ",*d);
     d=&duration;
     printf("it would take %.2f hours to drive to the moon\n",*d);
     return(0);
}