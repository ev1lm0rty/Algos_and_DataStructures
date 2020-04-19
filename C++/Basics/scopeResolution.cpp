#include<iostream>
using namespace std;

int i = 10;

int main()
{
  int i = 2;
  cout << i << endl;
  cout << ::i << endl;
  return 0;
}
