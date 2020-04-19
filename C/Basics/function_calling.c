#include <stdio.h>
void add(int a , int b);
void add_ref(int * , int *);
int main()
{
  int a = 10 , b = 20;
  printf("\fThe original value of variable A is: %d",a);
  printf("\nThe original value of variable B is: %d",b);
  printf("\n\n....Executing call by value function....\n");
  add(a,b);
  printf("\nNow the value of A: %d & value of B: %d",a,b);
  printf("\n\n....Executing the call by reference function....\n");
  add_ref(&a,&b);
  printf("\nNow the value of A: %d & value of B: %d\n",a,b);
  return 0;
}

void add(int a , int b)
{
  a = 30;
  b = 40;
}

void add_ref(int *a,int *b)
{
  *a = 30;
  *b = 40;
}
