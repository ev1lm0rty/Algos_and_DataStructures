/*This programs simply explains pointers*/
#include <stdio.h>
int main()
{
  int a = 10;
  int *ptr = &a;
  printf("\fThe value of A: %d",a);
  printf("\nFinding the value using pointer A:%d\n",*ptr);
  printf("\nThe address of A: %d",ptr);
  return 0;
}

