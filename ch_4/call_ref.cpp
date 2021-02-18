#include<iostream>

using namespace std;
int & max(int &x, int &y);
int main()
{
  cout << "\nEnter X && Y\n";

  int X, Y;

  cin >> X >> Y;
  cout << "\nGreatest number is\t" << X << "\t" << Y;


  cout << "\nGreatest number is\t" << X << "\t" << max(X,Y) ; 
/*
 * functions returning references can be treated as a variable
 * you can write explicitly something to it
 * or cout it directly
 */

  return 0;
}

int & max(int &x, int &y)
{
  if(x > y)
    return x;
  else
    return y;
}
