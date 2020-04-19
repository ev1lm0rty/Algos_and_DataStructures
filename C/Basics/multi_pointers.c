/*This program shows pointers to pointers*/

#include<stdio.h>
int main()
{
  int a = 10;
  int *ptr1 = &a;
  int **ptr2 = &ptr1;
  int ***ptr3 = &ptr2;

  printf("\nA:%d",a);
  printf("\nA:%d",*ptr1);
  printf("\nA:%d",**ptr2);
  printf("\nA:%d",***ptr3);
  
  return 0;
}
