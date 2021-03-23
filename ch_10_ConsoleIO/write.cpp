#include <cstring>
#include <iostream>

using namespace std;

int main() {
  const char *str1 = "C++";
  const char *str2 = "Programming";
  int m = strlen(str1);
  int n = strlen(str2);

  for (int i = 1; i < n; i++) {
    cout.write(str2, i);
    cout << endl;
  }

  for (int i = n; i > 0; i--) {
    cout.write(str2, i);
    cout << endl;
  }

  cout.write(str1, m).write(str2, n);

  cout << endl;

  cout.write(str1, 10);

  return 0;
}
