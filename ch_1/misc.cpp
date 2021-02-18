#include<iostream>

using namespace std;
void f(int &x);
void loop(int );

int main()
{

  int m =10;

  f(m);
  return 0;
}

void f(int &x)
{
   cout << "x-> \t";
   loop(x);
   cout << x <<endl;

   x += 10;
   cout << "x-> \t"; 
   loop(x);
   cout << x <<endl;
  
}

void loop(int t)
{
  for(t; t>0; t--)
  {
    if(t%2)
      cout << "-";
    else
      cout <<".";
  }
}
