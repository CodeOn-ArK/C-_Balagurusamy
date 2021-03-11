#include <iostream>

using namespace std;

class item {
  int number;
  float cost;

 public:
  void getdata(int a, float b);

  void putdata(void) {
    cout << "number :\t" << number << "\n";
    cout << "\ncost :\t" << cost << "\n";
  }
};

//......................Member Function Defintion................//
void item::getdata(int a, float b) {
  number = a;
  cost = b;
}

//.......................Main Program.............................//
int main() {
  item x;

  cout << "\nobject x"
       << "\n";

  x.getdata(100, 299.95);
  x.putdata();

  item y;

  cout << "\nobject y"
       << "\n";

  y.getdata(200, 175.50);
  y.putdata();

  return 0;
}
