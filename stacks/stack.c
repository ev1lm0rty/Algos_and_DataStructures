/*This Program shows the implementaion of stack using array*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int arr[MAX];
int top = -1;
void push(void);
void pop(void);
void peek(void);
void display(void);

int main(void)
{
  printf(".....Stack.....");
  int choice ;
  while(1)
  {
    printf("\nMenu:");
    printf("\n\t1.Push to stack");
    printf("\n\t2.Pop from stack");
    printf("\n\t3.Peek");
    printf("\n\t9.Exit\n");
    fflush(stdout);
    fflush(stdin);
    scanf("&d",&choice);

    switch(choice)
    {
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        peek();
        break;
      case 4:
        display();
        break;
      case 9:
        printf("\nExiting..!!\n");
        break;
      default:
        printf("\nWrong choice...\n");
        choice = 0;
        break;
    }
  }
}

void push(void)
{
  int num;
  if(top != MAX-1)
  {
    printf("\nEnter the value:");
    fflush(stdout);
    scanf("%d",&num);
    top++;
    arr[top] = num;
    printf("\nValue pushed");
  }
  else
  {
    printf("\nOverflow..!!!\n");
  }
}

void pop(void)
{
  if(top == -1)
  {
    printf("\nStack is empty\n");
  }
  else
  {
    printf("\n%d popped from stack..!!!\n",arr[top]);
    top--;
  }
}

void peek(void)
{
  if(top == -1)
  {
    printf("\nStack is empty..!!!\n");
  }
  else
  {
    printf("\nTop of stack: %d",arr[top]);
  }
}

void display(void)
{
  if(top != -1)
  {
    for(int i = 0 ; i <= top ; i++)
    {
      printf("%d\n---\n",arr[i]);
    }
  }
  else
  {
    printf("\nStack is empty..!!!");
  }
}





