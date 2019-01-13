#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int bet,roll,point;
    char c;

    srandom((unsigned)time(NULL));

    printf("enter your bet: $");
    scanf("%i",&bet);

    puts("rolling them bones.....!");
    roll=random()%11+2;

    printf("%d", roll);
    switch(roll)
    {
        case 7:
        case 11:
        printf("you win!!\n");
        bet*=2;
        break;
        case 2:
        case 3:
        case 12:
        printf("--Craps ! you lose!!!\n");
        bet=0;
        break;
        default:
        point=roll;
        printf("- your point is now %d.\n",point);
        while(1)
        {
            roll=random()%11+2;
            printf("\tyou rolled %d, point is %d.\n",roll,point);
            if(roll==point)
            {
                printf("\t you win!\n");
                bet*=2;
                break;
            }
            if(roll==7)
            {
                printf("\t Seven out, you lose\n");
                bet = 0;
                break;
            }
        }


    }
    printf(" you now have $%d.\n",bet);
    return(0);
}