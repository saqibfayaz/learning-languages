#include "lotto.h"

int ball[BALLS];

int main()
{
 init();
 select();
 sort();
 display();
 return(0);
}