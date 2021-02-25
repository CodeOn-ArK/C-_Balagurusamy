#include <iostream>

using namespace std;

/********************-CLASS-**********************/

class Complex {
 private:
  float x;
  float y;

 protected:
 public:
  Complex() {}
  Complex(float real, float img) {
    x = real;
    y = real;
  }
  Complex operator+(Complex);
  void display();
};

/******************-FUNCTIONS-*********************/
Complex Complex::operator+(Complex w) {
  Complex temp;

  temp.x = x + w.x;
  temp.y = y + w.y;

  return temp;
}

void Complex::display(void) { cout << x << " + j" << y << endl; }

/*********************-END-************************/

int main() {
  Complex C1, C2, C3;

  C1 = Complex(2.3, 4.5);
  C2 = Complex(112, 04.5);
  C3 = C2 + C1;

  cout << "C1 = ";
  C1.display();
  cout << "C2 = ";
  C2.display();
  cout << "C3 = ";
  C3.display();

  return 0;
}
