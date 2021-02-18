#include <iostream>

using namespace std;

class cmplx {
  float x, y;

 public:
  cmplx() {}
  cmplx(float a) { x = y = a; }
  cmplx(float real, float img) {
    x = real;
    y = img;
  }

  friend cmplx sum(cmplx, cmplx);
  friend void show(cmplx);
};

cmplx sum(cmplx c1, cmplx c2) {
  cmplx c3;

  c3.x = c1.x + c2.x;
  c3.y = c1.y + c2.y;

  return (c3);
}

void show(cmplx c) { cout << c.x << " + j" << c.y << endl; }

int main() {
  cmplx A(2.7, 3.5);
  cmplx B(1.6);
  cmplx C;

  C = sum(A, B);
  cout << "A = ";
  show(A);
  cout << "B = ";
  show(B);
  cout << "C = ";
  show(C);

  cmplx P, Q, R;
  P = cmplx(2.5, 3.9);
  Q = cmplx(1.6, 2.5);
  R = sum(P, Q);

  cout << "\n";
  cout << "P = ";
  show(P);
  cout << "Q = ";
  show(Q);
  cout << "R = ";
  show(R);

  return 0;
}
