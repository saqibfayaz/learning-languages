#include<stdio.h>
int main()
{
  int combination[] = {21,22,49};
  puts("the combination for lock is");
  printf("turn left to %d\n",combination[0]);
  printf("turn right to %d\n",combination[1]);
  printf("turn left to %d\n",combination[2]);
  puts("you have opened the safe");
  return(0);
}