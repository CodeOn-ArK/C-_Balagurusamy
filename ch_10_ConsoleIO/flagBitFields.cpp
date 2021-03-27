#include <iostream>

using namespace std;

int main() {
  system("clear");
  int num;
  cout << "ntr integer\n";
  cin >> num;

  cout << "\nHex, Octal && Decimal:\n" << num << endl;

  cout.setf(ios::hex, ios::basefield);
  cout.fill('^');
  cout.width(5);
  cout << num << "\n";

  cout.setf(ios::oct, ios::basefield);
  cout.setf(ios::left, ios::adjustfield);
  cout.fill('%');
  cout.width(5);
  cout << num << "\n";

  cout.unsetf(ios::left);
  cout.setf(ios::dec, ios::basefield);
  cout.fill('(');
  cout.width(5);
  cout << num << "\n";

  return 0;
}
