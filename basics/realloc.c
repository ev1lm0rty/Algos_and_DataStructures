/*This program shows the working of realloc and calloc*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int num;
  int *ptr;
  printf("Enter the size of array:");
  scanf("%d",&num);
  printf("\nAllocating memory using calloc\n");
  ptr = (int*)calloc(num,sizeof(int));

  if(ptr == NULL)
  {
    printf("\nMemory not allocated..Exiting\n");
    exit(0);
  }
  
  printf("Enter the array elements\n");
  for(int i = 0 ; i < num ; i++)
    scanf("%d",&ptr[i]);

  printf("\nHere is your array:\n");
  for(int i = 0 ; i < num ; i++)
    printf("\t%d",ptr[i]);
  int n = 10;
  printf("\nNow resizing the array to 10 elements\n");
  ptr = realloc(ptr,n * sizeof(int));
  printf("\nNow enter new elements:\n");

  for(int i = num ; i < 10 ; i++)
    scanf("%d",&ptr[i]);

  printf("Here's your new array:\n");
  for(int i = 0 ; i < 10 ; i++)
    printf("\t%d",ptr[i]);

  printf("\nNow freeing memory and exiting\n");
  free(ptr);
  return 0;
}
