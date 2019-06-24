#include<stdio.h>
#include<stdlib.h>
int main()
{
    float days[5],average;
    
    for(int i=0;i<5;i++)
    {
        printf("please enter the %d days temperature= \n",i+1);
       scanf("%f",&days[i]);
       printf("temperature for day %d was %.2f\n",i+1,days[i]);
       fpurge(stdin); 

    }
    average=(days[0]+days[1]+days[2]+days[3]+days[4])/5;
    //average=days[5]/5; this the wrong way to average any array!!!!! 
    //i tried it for my curiousity
    printf("average temperature was %.2f\n",average);
    return(0);
}