#include <iostream>

using namespace std;

int main() {
  int a, *ptr1, **ptr2, ***ptr3;

  ptr1 = &a;
  ptr2 = &ptr1;
  ptr3 = &ptr2;

  cout << "Addr of a : " << ptr1 << endl;
  cout << "Addr of ptr1 : " << ptr2 << endl;
  cout << "Addr of ptr2 : " << ptr3 << endl;

  return 0;
}
