#include<stdio.h>
#define RAD 57.2957795
int main()
{
    float radians,degrees;
    puts("convert radian to degrees");
    printf("enter the value in radians:");
    scanf("%f",&radians);
    degrees=radians*RAD;
   
        printf("%.5f radians is %.3f degrees. \n",radians,degrees);
        return(0);
}