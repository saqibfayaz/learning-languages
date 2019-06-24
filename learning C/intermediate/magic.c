#include<stdio.h>

int main()
{
    int r,c;
    int m[][3] = {
        8,1,6,
        3,5,7,
        4,9,2
    };

    puts("presenting you the magic square");
    for(r=0;r<3;r++)
    printf("%d %d %d\n",m[r][0],m[r][1],m[r][2]);
    putchar('\n');

    for(r=0;r<3;r++)
    printf("sum of row %d is %d\n",r+1,m[r][0]+m[r][1]+m[r][2]);

    for(c=0;c<3;c++)
    printf("sum of column %d is %d\n",c+1,m[0][c]+m[1][c]+m[2][c]);

    printf(" sum for diagonal NW/SE is %d\n",m[0][0]+m[1][1]+m[2][2]);

    printf(" sum for diagonal SW/NE is %d\n",m[0][2]+m[1][1]+m[2][0]);

    return(0);

}