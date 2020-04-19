/*Program for linked list creations and operations*/
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
  int data;
  struct node *next;
};
void printlist(struct node *);
int main()
{
  //Declaring nodes
  struct node *start = NULL;
  struct node *middle = NULL;
  struct node *last = NULL;

  //allocation of memory
  start = (struct node*)malloc(sizeof(struct node));
  middle = (struct node*)malloc(sizeof(struct node)); 
  last = (struct node*)malloc(sizeof(struct node)); 

  start->data = 1;
  start->next = middle;

  middle->data = 2;
  middle->next = last;

  last->data = 3;
  last->next = NULL;
  
  printlist(start);
  return 0;
}

void printlist(struct node* n)
{
  while(n != NULL)
  {
    printf("%d ",n->data);
    n = n->next;
  }
}
