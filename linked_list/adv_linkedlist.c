/*Advanced linked list*/
#include<stdio.h>
#include<stdlib.h>

void view_linked_list();
void create_linked_list();
struct node
{
  int data;
  struct node *next ;
}*start=NULL;

int main()
{
  int choice ;
  printf("......Advanced Linked List......\n");
  printf("Choose from the following:\n");
  printf("\t1.Create a linked list\n\t2.View the linked list\n");
  scanf("%d",&choice);

  switch (choice)
  {
    case 1:
      create_linked_list();
      break;
    case 2:
      view_linked_list();
      break;
    default:
      printf("Wrong choice");
      exit(0);
  }
  return 0;
}

void create_linked_list()
{
  printf("\nCreating linked list...\n");
  printf("Enter values to stop, enter -1\n");
  int n = -1;
  scanf("%d",&n);
  struct node *new_node , *ptr;

  while(n != -1)
  {
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = n;

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

    scanf("%d",&n);
  }

  view_linked_list();
 }


void view_linked_list()
{
  struct node *pp;
  pp = start;
  while(pp->next != start)
  {
    printf("%d\t",pp->data);
    pp = pp->next;
  }
}


