#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROOLS 1000

int main()
{
    int d1,d2,total,running_total;
    float average;
    srandom((unsigned)time(NULL));
    for(int i=0;i<=1000;i++)
    {
        d1=random()%6+1;
        d2=random()%6+1;
        total =d1+d2;
        running_total+=total;
        printf("you rolled d1=%d and d2=%d and total is %d\n",d1,d2,total);
    }
    average=(float)running_total/ROOLS;
    printf("average is %f",average);
return(0);
}