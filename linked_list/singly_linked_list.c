/*Program for singly linked list*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node * next;
};

struct node *start;
struct node *new_node;

void create()
{
  //struct node *new_node;
  struct node *ptr;
  int num;
  printf("Enter values and hit RETURN, enter -1 to stop\n> ");
  scanf("%d",&num);
  while(num != -1)
  {
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = num;

    if(start == NULL)
    {
      new_node->next = NULL;
      start = new_node;
    }

    else
    {
      ptr = start;
      while(ptr->next != NULL)
      {
        ptr = ptr->next;
      }
      ptr->data = num;
      ptr->next = NULL;
    }
    printf("> ");
    scanf("%d",&num);
  }
}

void view(struct node *pp)
{

  while(pp->next != NULL)
  {
    printf("%d --->",pp->data);
    pp = pp->next;
  }
}

void b_insert()
{
  int value;
  struct node /**new_node*/ *ptr;
  new_node = (struct node*)malloc(sizeof(struct node));
  printf("\nEnter value\n> ");
  scanf("%d",&value);
  ptr = start;
  new_node->data = value;
  new_node->next = ptr->next;
  start = new_node;

}

void e_insert()
{
  int num;
  printf("\nEnter the value:\n> ");
  scanf("%d",&num);
  struct node *ptr /**new_node*/;
  ptr = start;
  while(ptr->next != NULL)
  {
    ptr = ptr->next;
  }
  new_node = (struct node*)malloc(sizeof(struct node));
  new_node->data = num;
  new_node->next = NULL;
  ptr->next = new_node;
}

void b_delete()
{
  struct node *ptr ;
  ptr = start->next;
  start = ptr;
  free(ptr);
}

void e_delete()
{
  struct node *ptr;
  while(ptr->next !=NULL)
  {
    ptr = ptr->next;
  }
  free(ptr);
}


int main()
{
  int choice;
  do
  {
    printf("\f......Circular linked list......\n");
    printf("\t1.Create linked list\n");
    printf("\t2.View linked list\n");
    printf("\t3.Insert node at the begenning of the list\n");
    printf("\t4.Insert node at the end of the list\n");
    printf("\t5.Delete node from the beginning of the list\n");
    printf("\t6.Delete node from the end of the list\n> ");
    scanf("%d",&choice);

    switch(choice)
    {
      case 1:
        create();
        break;
      case 2:
        view(start);
        break;
      case 3:
        b_insert();
        break;
      case 4:
        e_insert();
        break;
      case 5:
        b_delete();
        break;
      case 6:
        e_delete();
        break;
      case 0:
        exit(0);
      default:
        printf("Wrong choice\n");
    }
  }while(choice != 0);

return 0;
}
