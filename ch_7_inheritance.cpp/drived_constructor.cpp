#include <iostream>

using namespace std;

/******************-CLASS-**************************/

class alpha {
 private:
  int x;

 protected:
 public:
  alpha(int i) {
    x = i;
    cout << "alpha initialized\n";
  }
  void show_a(void) { cout << "x = " << x << endl; }
};

/*****************-FUNCTIIONS-**********************/

/*********************-END-*************************/

class beta {
  float y;

 public:
  beta(float j) {
    y = j;
    cout << "beta initialized\n";
  }

  void show_y(void) { cout << "y = " << y << endl; }
};

class gamma : public beta, public alpha {
  int m, n;

 public:
  gamma(int a, float b, int c, int d) : alpha(a), beta(b) {
    m = c;
    n = d;

    cout << "gamma initialized \n";
  }

  void show_mn() { cout << "m = " << m << endl << "n = " << n << endl; }
};

int main() {
  gamma g(1, 2, 3, 4);

  cout << endl;

  g.show_a();
  g.show_y();
  g.show_mn();

  return 0;
}
