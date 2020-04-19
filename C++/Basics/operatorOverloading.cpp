#include <iostream>
using namespace std;

class test
{
  int a , b;
  public:
  test() {}
  test(int x , int y)
  {
    a = x;
    b = y;
  }

  test operator+(test obj);
  test operator++();

  void show()
  {
    cout << a << " " << endl;
    cout << b << " " << endl;
  }
};

test test::operator+(test obj)
{
  test temp;

  temp.a = obj.a + a;
  temp.b = obj.b + b;

  return temp;

}

test test::operator++()
{
  test temp;
  temp.a = a + a;
  temp.b = b + b;

  return temp;
}

int main()
{
  test t1(10 , 20), t2(20 , 30);
  
  cout << "Original Values" << endl;
  t1.show();
  t2.show();

  cout << "After + overloading " << endl;
  t1 = t1 + t2;
  t1.show();
  cout << "After ++ overloading " << endl;
  ++t1;
  t1.show();
  return 0;
}
