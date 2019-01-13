#include<stdio.h>
int main()
{
    int code;
    puts("Enter the error code number");
    puts("Range 1 through 5: ");
    scanf("%d",&code);

    if(code==1)
    {
        puts("San Andreas Fault");
        puts("Solution: Move your house");
    }
    else if(code==2)
    {
        puts("Illegal Operation");
        puts("Solution: Find Another doctor.");
    }
    else if(code==3)
    {
        puts("Bad Filename");
        puts("Solution: Spank the file name and put it to bed without any supper.");
    }
    else if(code==4)
    {
        puts("Missing Socket");
        puts("Solution: Look in the dryer.");
    }
    else if(code==5)
    {
        puts("Divide by Zero");
        puts("Solution: Mess with the number until it works");
    }
    else{
        puts(" Error code value out of range");
        puts("Solution: Read the directions next time.");
    }
    return(0);
}