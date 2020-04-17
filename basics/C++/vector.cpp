#include<iostream>
#include<vector>
#include<cctype>
using namespace std;

int main()
{
  vector<char> v(10); // creates a vector of length 10
  unsigned int i;

  cout << "Size = " << v.size() << endl;

  for(i = 0 ; i < 10 ; i++)
    v[i] = i + 'a';

  //Display contents of vector

  cout << "Content" << endl;

  for(i = 0 ; i < v.size(); i++)
    cout << v[i] << " ";

  //Expanding
  
  for(int i = 0 ; i < 10 ; i++)
    v.push_back(i+10+'a');

  cout << "Size = " << v.size();

  for(int i = 0 ; i < v.size(); i++)
  {
    v[i] = toupper(v[i]);
  }

  for(int i = 0 ; i < v.size() ; i++)
    cout << v[i] << " " ;

  return 0;
}
