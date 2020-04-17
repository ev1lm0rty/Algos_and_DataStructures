#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

void stradd(char *s1 , char *s2);
void stradd(char *s1 , int i);

int main()
{
  char str[100];
  strcpy(str,"Hello ");
  stradd(str,"there..");
  cout << str << endl;

  stradd(str , 100);
  cout << str << endl;
  return 0;
}

void stradd(char *s1 , char *s2)
{
  strcat(s1,s2);
}

void stradd(char *s1 , int i)
{
  char temp[80];

  sprintf(temp,"%d",i); //copies the output of printf to a string
  strcat(s1,temp);
}
