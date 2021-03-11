#include <cstring>
#include <iostream>

using namespace std;

/********************-CLASS-**********************/

class person {
 private:
  char name[20];
  float age;

 protected:
 public:
  person() {}
  person(const char *s, float a) {
    strcpy(name, s);
    age = a;
  }

  person &greater(person &x) {
    if (x.age >= this->age)
      return x;

    else if (x.age <= this->age)
      return *this;

    else
      return *this;
  }

  person &operator>=(person &x) { return this->greater(x); }

  void display(void) {
    cout << "\nName : \n" << name << endl << "Age : \n" << age << endl;
  }
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/

int main() {
  person P1("John", 123), P2("Cena", 22), P3("Puchku", 100);

  person P;

  P = P1 >= P2;
  cout << "\nElder person is : \n";
  P.display();

  P = P3 >= P2;
  cout << "\nElder person is : \n";
  P.display();
}
