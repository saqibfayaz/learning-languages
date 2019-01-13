#include<stdio.h>
int main()
{
    int numb;
    do
    {
        printf("enter a number greater than 20\n");
        scanf("%d",&numb);
    }
    while(numb<=20);
    printf("thank you for this number, you enterted %d which is greater than 20\n",numb);
    return(0);
}