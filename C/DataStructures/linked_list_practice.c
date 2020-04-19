#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
}*start = NULL;

int main()
{
  int num;
  printf("Creating linked list.....\n");
  printf("Enter -1 to stop input\n");
  scanf("%d",&num);
  struct node *new_node = (struct node*)malloc(sizeof(struct node));
  struct node *ptr  ;

  while(num != -1)
  {
    new_node->data = num;
    if(start == NULL)
      {
        new_node->next = new_node;
        start = new_node;
      }
    else
    {
      ptr = start;

      while(ptr->next != start)
        ptr = ptr->next;

      ptr->next = new_node;
      new_node->next = start;
    }
    scanf("%d",&num);
  }

  ptr = start;
  while(ptr->next != start)
  {
    printf("%d \t",ptr->data);
    ptr = ptr->next;
  }
  
  return 0;
}

