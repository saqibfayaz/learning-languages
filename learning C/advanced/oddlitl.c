#include<stdio.h>
int main()
{
    char c;
    short int i;
    long x;
    float f;
    double d;
    short int  arr[16];

    puts("address of variables");
    printf("address of char variable is = %p\n",&c);
    printf(" address of int variable is = %p\n",&i);
    printf("address of long  variable is = %p\n",&x);
    printf("address of float variable is = %p\n",&f);
    printf("address of double variable is = %p\n",&d);
    for(int I=0;I<16;I++)
    printf("address of array [%d]  is = %p\n",I,&arr[I]);

    return(0);

}