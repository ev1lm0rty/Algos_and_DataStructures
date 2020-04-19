/*Program for Creation and Operations on arrays*/
/*Operations:
 * Traversal
 * Insertion
 * Searching
 * Deleting
 * Merging
 * Sorting
 */

#include<stdio.h>
void print_array(int arr[], int size);
void mid_insertion(int arr[],int size);
void del_element(int arr[],int size);
int main()
{
  int size,i,arr[100] = {0};
  printf("\f....Array operations....\n\n");
  printf("Enter the size of the array: ");
  scanf("%d",&size);
  printf("\nEnter elements in array:\n");
 
  /*Insertion*/
  for( i = 0 ; i < size ; i++)
  {
    printf("%d : ",i);
    scanf("%d:", &arr[i]);
  }
  printf("\n\nYour Base Array is:\n");
  print_array(arr,size);
  mid_insertion(arr,size);
  del_element(arr,size);
  return 0;
}


/* Traversal */
void print_array(int arr[],int size)
{
  int j = 0;
  for (j = 0 ; j < size ; j++)
    printf("Arr[%d]: %d\n",j,arr[j]);
}

/* Insertion in middle*/

void mid_insertion(int arr[] , int size )
{
  printf("\nEnter the element you want to insert in the middle: ");
  int el,middle;
  scanf("%d",&el);
  if (size % 2 == 0)
    middle = size/2  ;
  else
    middle = (size / 2) + 1;
  for (int i = size ; i > middle ; i--)
  {
    arr[i+1] = arr[i];
  }
  arr[middle] = el;
  printf("\nNew Array after insertion in middle:\n");
  print_array(arr,size+1);
}

void del_element(int arr[] , int size)
{
  int index;
  printf("\nEnter index of the element you want to delete:");
  scanf("%d",&index);

  for(int i = index ; i < size-1 ; i++)
    arr[i] = arr[i+1];

  size--;
  print_array(arr,size);
}

void merge_array(int arr1[] , int arr2[] , s1 , s2)
{
  printf("\nArray 1:\n");
  print_array(arr1 , s1);
  printf("\nArray 2:\n");
  print_array(arr2 , s2);

