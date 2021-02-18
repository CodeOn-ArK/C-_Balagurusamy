#include <iostream>

using namespace std;

class code {
  int id;

 public:
  code() {}
  code(int a) { id = a; }
  code(code &x) {
    cout << "\nCopy constructor called\n";
    this->id = x.id;
  }

  void display() { cout << id; }
};

int main() {
  code A(100);
  code B(A);
  code C = A;

  code D;
  D = A;

  cout << "\nid of A: ";
  A.display();
  cout << "\nid of B: ";
  B.display();
  cout << "\nid of C: ";
  C.display();
  cout << "\nid of D: ";
  D.display();

  return 0;
}
