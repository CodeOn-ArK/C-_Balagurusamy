#include <iostream>

using namespace std;

/******************************************
 *              Class B
 * ****************************************/
class B {
  int a;

 public:
  int b;
  void get_ab();
  int get_a();
  void show_a();
};

void B::get_ab() {
  cout << "Enter values for a && b: ";
  cin >> a >> b;
}

int B::get_a() { return a; }

void B::show_a() { cout << "\na \t" << a << endl; }

/****************************************
 *              Class D
 * **************************************/
class D : private B {
  int c;

 public:
  void mul();
  void display();
};

void D::mul() {
  get_ab();
  c = b * get_a();
}

void D::display() {
  show_a();

  cout << "b = " << b << endl << "c = " << c << endl;
}

/********************************************
 *                Main
 * *******************************************/
int main() {
  D d;

  // d.get_ab()  won't work
  d.mul();

  // d.show_a() won't work
  d.display();

  // d.b = 20;  won't work
  d.mul();
  d.display();

  return 0;
}
