#include<iostream>

using namespace std;

int main()
{
  int x = 10;
  int *ptr;

  ptr = &x;
  int &y = *ptr;

  cout << "\nx\t" << x;

  cout << "\nptr\t" << ptr << "\t*ptr\t" << *ptr;

  cout << "\ny\t" << y << endl;
  
  x = 20;
  cout << "\ny\t" << y << endl;

  *ptr = 30;
  cout << "\ny\t" << y << endl;

  return 0;
}
