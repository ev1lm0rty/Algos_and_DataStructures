/*Explains the function on malloc*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int *ptr;
  int n , i;
  printf("\nEnter the number of elements for array:");
  scanf"%d",&n);
  ptr = (int*)malloc(n * sizeof(int));
  if (ptr == NULL)
  {
    printf("Memory is full\n");
    exit(0);
  }

  else
  {
    printf("Enter the elements\n");
    for(int i = 0 ; i < n ; i++)
      scanf("%d",&ptr[i]);
  }

  for(int i = 0 ; i < n ; i++)
    printf("\n%d",ptr[i]);

  return 0;
}

