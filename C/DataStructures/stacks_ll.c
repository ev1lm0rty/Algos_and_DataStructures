/*Linked list representation of stacks*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *top = NULL;

int main(void)
{
  int choice;
  while(1)
  {
    printf("\n....Stacks using linked list....\n");
    printf("Menu:\n");
    printf("\t1.Push");
    printf("\n\t2.Pop");
    printf("\n\t3.Peek");
    printf("\n\t4.Display");
    printf("\n\t0.Exit\n");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&choice);

    if(choice == 0)
    {
      printf("\nExiting..!!!\n");
      exit(0);
    }
    else if(choice == 1)
      push();
    else if (choice == 2)
      pop();
    else if (choice == 3)
      peek();
    else if (choice == 4)
      display();
    else
      printf("\nWrong Choice..!!!!\n");
  }
}

void pop()
{

