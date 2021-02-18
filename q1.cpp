#include<iostream>

using namespace std;

void swap_value(int, int);
void swap_ref(int &, int &);
void swap_addr(int *, int *);

int main()
{
  int a, b;
  cout << "a " << " b \n";
  cin >> a >> b;

  swap_value(a,b);

  cout << "a " << a 
    << "b " << b << endl;

 swap_ref(a, b);

  cout << "a " << a 
    << "b " << b << endl;

  swap_addr(&a ,&b);

  cout << "a " << a 
    << "b " << b << endl; 

  return 0;
}
void swap_value(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;

}
void swap_addr(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

void swap_ref(int &f , int &g)
{
  int temp;
  temp = f;
  f = g;
  g = temp;

}
