/*Program for doubly linked list*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *prev;
  struct node *next;
};

struct node *start = NULL;

int main()
{
  printf(".....Doubly Linked List.....");
  printf("\nEnter values and enter -1 for termination\n");
  scanf("%d",&num);
  struct node *new_node, *ptr;

  while(num != -1)
  {
    new_node = (struct *node)malloc(sizeof(struct node));
    new_node->data = num;
    if(start == NULL)
    {
      new_node->next = NULL;
      new_node->prev = NULL;
    }
    else
    {
      ptr = start;
      while(ptr->next != NULL)
      {
        ptr = ptr->next;
      }
      ptr


