#include <iostream>

using namespace std;


void show_line(int len)
{
  for(int i=0;i<len;i++)
  {
    cout << "*";  
  }
  cout << endl;
}

int main()
{
  show_line(10);
}
