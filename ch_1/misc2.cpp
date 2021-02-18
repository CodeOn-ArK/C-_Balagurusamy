#include<iostream>

using namespace std;

int m=10;
int main()
{

  int m =20;
  {
    int k=m;
    int m=30;

    cout << "\ninner block\n";

    cout << "k = \t" << k << endl;
    cout << "m = \t" << m << endl;

    cout << "::m = \t" << ::m << endl;

  }

  cout << "\nouter block\n";

  cout << "m = \t" << m << endl;
  cout << "::m = \t" << ::m;

  return 0;

}
