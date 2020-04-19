#include<iostream>
using namespace std;

#define SIZE 100

//Creating class stack

class stack
{
  int stck[SIZE];
  int tos;

  public:
  void init();
  void push(int i);
  int pop();
};

void stack::init()
{
  tos = 0;
}

void stack::push(int i)
{
  if(tos == SIZE)
  {
    cout << "Stack is full" << endl;
    return;
  }
  stck[tos] = i;
  tos++;
}

int stack::pop()
{
  if(tos==0)
  {
    cout << "Stack underflow" << endl;
    return 0;
  }
  tos--;
  return stck[tos];
}

int main()
{
  stack st1 , st2; // Creating objects

  st1.init();
  st2.init();

  st1.push(1);
  st2.push(2);

  st1.push(3);
  st2.push(4);

  cout << st1.pop() << " ";
  cout << st1.pop() << " ";
  cout << st2.pop() << " ";
  cout << st2.pop() << endl;

  return 0;
}


