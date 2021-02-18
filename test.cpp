#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
 int i = 5, n = 5; 

  while(n > 0)
  {
    while(i <= n)
    {
      cout << n;
      i--;
    }

    cout << endl;
    i = n;
    n--;
  }

  return 0;
}
