#include <iostream>

#define PI (22.0 / 7.0)

using namespace std;

int main() {
  int i = 0;
  cout << "Value of PI\n";

  for (int i = 1; i <= 10; i++) {
    //    cout.width(i + 1);
    cout.precision(i);
    cout << PI << endl;
  }

  return 0;
}
