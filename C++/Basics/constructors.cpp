#include<iostream>
using namespace std;
#define SIZE 100

class stack
{
  int stck[SIZE];
  int tos;
  public:
  stack();
  ~stack();
  void push(int i);
  int pop();
};

// Constructor
stack::stack()
{
  tos = 0;
  cout << "Stack Initialized" << endl;
}

// Destructor
stack::~stack()
{
  cout << "Stack Destroyed" << endl;
}

void stack::push(int i)
{
  if(tos == SIZE)
  {
    cout << "Stack Overflow" << endl;
    return;
  }
  stck[tos] = i;
  tos++;
}

int stack::pop()
{
  if(tos == 0)
  {
    cout << "Stack Underflow" << endl;
    return 0;
  }
  tos--;
  return stck[tos];
}

int main()
{
  stack a,b;
  a.push(1);
  a.push(2);
  b.push(3);
  b.push(4);

  cout << a.pop() << " ";
  cout << a.pop() << " ";
  cout << b.pop() << " ";
  cout << b.pop() << " ";
  cout << endl;

  return 0;
}

