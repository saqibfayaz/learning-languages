#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int throw(void);

int main()
{
    int bet,roll,point;
    char c;

    srandom((unsigned)time(NULL));

    printf("Enter your bet: $");
    scanf("%i",&bet);

    puts("Rolling them bones.....!");
    roll=throw();
    printf("%d",roll);
    switch(roll)
    {
        case 7:
        case 11:
            printf("-you win!\n");
            bet*=2;
            break;
        case 2:
        case 3:
        case 12:
            printf("- Craps! you lose!\n");
            bet=0;
            break;
        default:
            point=roll;
            printf("- your point is now %d.\n",point);
            while(1)
            {
                roll=throw();
                printf("\tyou rolled %d, point is %d.\n",roll,point);
                if(roll==point)
                {
                    printf("\tyou win!\n");
                    bet*=2;
                    break;
                }
                if(roll==7)
                {
                    printf("\tSeven is out, you lose\n");
                    bet=0;
                    break;
                }
            }


    }
    printf("you now have $%d.\n",bet);
    return(0);
}
int throw(void)
{
    int die1,die2,total;
    die1=random()%6+1;
    die2=random()%6+1;
    total=die1+die2;
    return(total);
}