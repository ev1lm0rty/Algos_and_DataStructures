#include<iostream>
#include<new>
using namespace std;

int main()
{
  int *p;
  int *q;

  try
  {
    p = new int; // allocate space for int
    q = new int (200);
  }
  catch(bad_alloc a)
  {
    cout << "Allocation Failed" << endl;
    return 1;
  }

  *p = 100;

  cout << "At " << p << " ";
  cout << "is the value " << *p << endl;
  cout << "At " << q << " ";
  cout << "is the value " << *q << endl;
  delete p;

  return 0;
}
