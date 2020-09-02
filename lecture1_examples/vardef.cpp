#include <stdio.h>

// Global variables
int x;
int a,y;

int addval(int val1,int val2) 
{
  int z; // Local variable

  z = val1+ val2;
  return z;
}

int main() 
{
  int rezult;
  rezult = addval(5,10);
  printf("rezult = %d\n",rezult);
  return 0;
}
