#include<stdio.h>
int main()
{
    struct stuff
    {
        int numb;
        char letter;
    }my,yours;
    //my stuff
    my.numb=23;
    my.letter='s';

    puts("stuff");
    printf("enter your favourite letter! ");
    yours.letter=getchar();

    printf("enter your favourite numb! ");
    scanf("%d",&yours.numb);

    //output
    printf("my favourite letter is %c\n",my.letter);
    printf("and my favourite number is %d\n",my.numb);
     printf("and your favourite letter is %c\n",yours.letter);
      printf("and your favourite number is %d\n",yours.numb);
      if(my.numb==yours.numb)
      printf("wow we have same favourite numbers");

      return(0);

}