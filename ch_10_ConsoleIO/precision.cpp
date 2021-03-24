#include <cmath>
#include <iostream>

using namespace std;

int main() {
  system("clear");
  cout << "Prescision set to 3 digits\n\n";
  cout.precision(3);

  cout.width(10);
  cout << "value";
  cout.width(15);
  cout << "SQRT_OF_VALUE" << endl;

  for (int i = 1; i <= 5; i++) {
    cout.width(8);
    cout << i;
    cout.width(13);
    cout << sqrt(i) << endl;
  }

  cout << "\n Precision set to 5 digits \n\n";
  cout.precision(5);
  cout << "sqrt(10) = " << sqrt(10) << endl;

  //  cout.precision(40);
  cout << "sqrt(10) = " << sqrt(10) << "default" << endl;

  return 0;
}
