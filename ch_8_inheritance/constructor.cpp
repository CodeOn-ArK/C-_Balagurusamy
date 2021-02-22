#include <iostream>

using namespace std;

/********************-CLASS-**********************/

class alpha {
 private:
  int x;

 protected:
 public:
  alpha(int i) {
    x = i;
    cout << "\n alpha initialized";
  }

  void show_alpha() { cout << " x " << x << endl; }
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/

/********************-CLASS-**********************/

class beta {
 private:
  float p, q;

 protected:
 public:
  beta(float a, float b) : p(a), q(b + p) { cout << "\n beta initialized"; }
  void show_beta() {
    cout << " p = " << p << endl;
    cout << " q = " << q << endl;
  }
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/

/********************-CLASS-**********************/

class gamma : public beta, public alpha {
 private:
  int u, v;

 protected:
 public:
  gamma(int a, int b, float c) : alpha(a * 2), beta(c, c), u(a) {
    v = b;
    cout << "\nGamma initialized\n";
  }
  void show_gamma(void) {
    cout << " u = " << u << endl;
    cout << " v = " << v << endl;
  }
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/

int main() {
  gamma g(1, 2, 3);

  cout << "\n\nDisplay memner values " << endl;

  g.show_alpha();
  g.show_beta();
  g.show_gamma();

  return 0;
}
