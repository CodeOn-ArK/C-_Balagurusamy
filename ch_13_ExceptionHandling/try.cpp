#include <iostream>

using namespace std;

int main() {
  int a, b;
  cout << "Enter vals of a && b\n";
  cin >> a >> b;

  int x = a - b;

  try {
    if (x != 0)
      cout << "\nResult (a/x)\n" << (a / x) << endl;
    else
      throw(x);
  } catch (int i) {
    cout << "\nException caught: Divide err\n";
  }

  cout << "\nEnd\n";

  return 0;
}
