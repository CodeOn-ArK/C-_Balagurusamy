#include <iostream>

using namespace std;

class M {
 protected:
  int m;

 public:
  void display() { cout << "\nIn class M m = " << m << endl; }
  void get_m(int);
};

void M::get_m(int x) { m = x; }

/**********************************************************/

class N {
 protected:
  int n;

 public:
  void get_n(int);
};

void N::get_n(int y) { n = y; }

/**********************************************************/

class P : public M, public N {
 public:
  void display();
};

void P::display(void) {
  cout << "m = " << m << endl
       << "n = " << n << endl
       << "m*n = " << m * n << endl;
}

/**********************************************************/

int main() {
  P p;

  p.get_m(10);
  p.get_n(20);

  p.M::display();
  p.P::display();

  return 0;
}
