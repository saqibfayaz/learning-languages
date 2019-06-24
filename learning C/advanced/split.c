#include<stdio.h>

int main()
{
    unsigned short int hex,first,second,third,fourth;

    printf("Enter a 8  digit hex value: ");
    scanf("%hx",&hex);
    first=  hex &  0xFF000000;
    second= hex &  0x00FF0000;
    third=  hex &  0x0000FF00;
    fourth= hex &  0x000000FF;
    first >>= 24;
    second >>= 16;
    third >>=8;


    printf("0x%08X is composed of %02X and %02X and %02X and %02X\n",hex,first,second,third,fourth);
    return(0);
}