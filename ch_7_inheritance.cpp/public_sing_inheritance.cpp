#include <iostream>

using namespace std;

class B {
  int a;

 public:
  int b;

  void set_ab();
  int get_a();
  void show_ab();
};

void B::set_ab() {
  cout << "\nEnter the value of A\n";
  cin >> this->a;

  cout << "\nEnter the value of B\n";
  cin >> this->b;
}

int B::get_a() { return this->a; }

void B::show_ab() {
  cout << "\nA is\t" << this->a << endl;
  cout << "\nB is\t" << this->b << endl;
}

class D : public B {
  int c;

 public:
  void mul(void);
  void display(void);
};

void D::mul() { c = b * get_a(); }

void D::display() {
  cout << "\n a = " << get_a() << endl;
  cout << "\n b = " << b << endl;
  cout << "\n c = " << c << endl;
}

int main() {
  D d;

  d.set_ab();
  d.mul();
  d.show_ab();
  d.display();

  cout << "\nsize_of" << sizeof(B) << "\t " << sizeof(D) << endl;
  d.b = 20;
  d.mul();
  d.display();

  return 0;
}
