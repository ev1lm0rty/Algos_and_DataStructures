#include<iostream>
using namespace std;

template <class X> void swap(X &a , X &b)
{
  X temp;
  temp = a;
  a = b;
  b = temp;
}

int main()
{
  int i = 0;
  int j = 10;
  char a = 'a';
  char b = 'b';
  
  swap(i , j);
  swap(a , b);

  cout << i << j << a << b<< endl;
  return 0;
}
