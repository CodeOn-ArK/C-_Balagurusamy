#include <iostream>

using namespace std;

/********************-CLASS-**********************/

class Complex {
 private:
  float x;
  float y;

 protected:
 public:
  Complex() {};

  Complex(float real, float img) {
    x = real;
    y = img;
  }
  Complex getdata();

  Complex operator+(Complex);
  void display();
};

/******************-FUNCTIONS-*********************/
Complex Complex::operator+(Complex w) {
  Complex temp;

  temp.x += x + w.x;
  temp.y += y + w.y;

  return temp;
}

void Complex::display(void) { cout << x << " + j" << y << endl; }

Complex Complex::getdata() {
  float img, real;

  cout << "Enter img && real part\n";
  cin >> img >> real;
<<<<<<< HEAD

  *this = Complex(real, img);
=======
 
  Complex C = Complex(real,img);
  return C;
>>>>>>> 6712027647f2f31dcdb28d59d2400d90e126a594
}
/*********************-END-************************/

int main() {
  Complex C1, C2, C3;

<<<<<<< HEAD
  C1.getdata();
  C2.getdata();
=======
  C1 = C1.getdata();
  C1.display();
  C2 = C2.getdata();
  C2.display();
>>>>>>> 6712027647f2f31dcdb28d59d2400d90e126a594

  C3 = C2 + C1;

  cout << "C1 = ";
  C1.display();
  cout << "C2 = ";
  C2.display();
  cout << "C3 = ";
  C3.display();

  return 0;
}
