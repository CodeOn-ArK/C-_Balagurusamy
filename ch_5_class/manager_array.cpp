#include <iostream>

using namespace std;

class employee {
  char name[30];
  float age;

 public:
  void getdata(void);
  void putdata(void);

  friend void deleteOBJ(employee);
};

void employee::getdata() {
  cout << "\nEnter name\n";
  cin >> name;

  cout << "\nEnter age\n";
  cin >> age;
}

void employee::putdata() {
  cout << "\nName : \t" << this->name << endl;
  cout << "\nAge : \t" << this->age << endl;
}

const int size = 3;

int main() {
  employee manager[size];

  for (int i = 0; i < size; i++) {
    cout << "\nDetails of manager" << i + 1 << endl;
    manager[i].getdata();
  }

  cout << endl;

  for (int i = 0; i < size; i++) {
    cout << "\nManager   " << i + 1 << endl;
    manager[i].putdata();
  }

  return (0);
}
