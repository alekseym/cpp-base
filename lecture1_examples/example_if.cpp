#include <iostream>

using namespace std;

void example_if() 
{
  char ch;
  cout << "Enter a character \n";
  cin >>ch;

  if(ch=='q')
  {
    cout << "Quit charcter entered \n";
  }
  else
  {
    cout << "character "<< ch<< " entered \n";
  }
}

void example_while(int start_value)
{
  int i;
  i=0;
  while(i<10)
  {
    cout << "value  ["<< i <<"] ="<< start_value+i << endl; 
    i++;
  }
}

void example_for(int start_value)
{
  for(int i=0;i<10;i++)
  {
    cout << "value [ "<< i <<"] ="<< start_value+i << endl; 
  }
}



int main() 
{
  example_if();
  example_while(5);
  example_for(5);
  return 0;
}
