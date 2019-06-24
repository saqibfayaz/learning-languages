#include<stdio.h>
void a(void)
{
    int a;a=10;
}
void b(void)
{
    int b;
    printf("B is %d\n",b);
}
int main()
{
    a();
    b();
    return(0);
}