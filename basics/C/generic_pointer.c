/*This program explains generic pointers*/
#include<stdio.h>
int main()
{
  int a = 10;
  void *ptr;
  char b = 'A';

  ptr = &a;
  printf("\nGeneric pointer points to integer value:%d",*(int*)ptr);

  ptr = &b;
  printf("\nGeneric pointer points to character value:%c",*(char*)ptr);
  return 0;
}

