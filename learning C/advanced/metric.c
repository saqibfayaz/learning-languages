#include<stdio.h>
#define KPM 1.609344

int main()
{
    float miles,kilometers;
    float *pmiles;
    float *k_address;

    printf("enter the value in miles: ");
    scanf("%f",&miles);

    kilometers=miles*1.609;

    printf("the %.2f Miles are same as %.2f Kilometers\n",miles,kilometers);
    pmiles=&miles;
    k_address=&kilometers;
    printf("Variable 'miles' is %d bytes long at %p address\n",sizeof(miles),pmiles);
    printf("Variable 'kilometer' is %d bytes long at %p address\n",sizeof(kilometers),k_address);

    return(0);
}