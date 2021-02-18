#include<iostream>

using namespace std;

class personal
{
  public:
    int p();

};


int personal::p()
{
  return 1;

}

int main()
{
  personal a;
  int personal::*x = &personal::p();

  //a.x  = &personal::p;
  cout << ((a.*(a.x))());

  return 0;
}
