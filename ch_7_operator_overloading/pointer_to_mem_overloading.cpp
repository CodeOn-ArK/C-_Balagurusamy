#include <iostream>

using namespace std;

/********************-CLASS-**********************/

class test {
 private:
 protected:
 public:
  int num;
  test(int j) { num = j; }

  test* operator->(void) { return this; }
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/

int main() {
  test T(5);
  test* Ptr = &T;

  cout << "T.num = " << T.num;
  cout << "\nPtr->num = " << Ptr->num << endl;

  cout << "\nT->num = " << T->num;

  return 0;
}
