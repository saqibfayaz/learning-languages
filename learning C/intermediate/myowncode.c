#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TOTAL 100

int main()
{
    srandom((unsigned)time(NULL));
    int numbers[TOTAL];
    int sequence,sum;
    float mean;
    //generating random numbers
    printf("press any key to generate numbers");
    int x=getchar();
    for(int a=0;a<TOTAL;a++)
    {
        numbers[a]=random() % 100 + 1;

    }
    printf("numbers generated!!!!\n");
    printf("now press any key to display numbers\n");
    int y=getchar();
    //printing random numbers
    for(int b=0;b<TOTAL;b++)
    {
        printf("%d is %d\n",sequence+=1,numbers[b]);

    }
    putchar('\n');
    puts("press enter to get the mean of these random numbers");
    int z=getchar();
    //mean of the random numbers
    for(int c=0;c<TOTAL;c++)
    {
        sum+=numbers[c];
    }
    mean=(float)sum/TOTAL;
    printf("mean of the numbers is %.1f\n",mean);
    printf("and the 51st number is %d\n",numbers[50]);

    return(0);
}