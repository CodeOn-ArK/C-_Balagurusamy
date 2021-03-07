#include <cstring>
#include <iostream>

using namespace std;

int main() {
  int i = 0;
  const char *ptr[10] = {"books", "television", "computer", "sports"};

  char str[25];

  cout << "\n\n Enter choice\n";
  cin >> str;

  for (i = 0; i < 4; i++) {
    if (!strcmp(str, ptr[i])) {
      cout << "leisure found\t" << i + 1 << endl;
      break;
    }
  }

  if (i == 4) cout << "\nNot available\n";

  return 0;
}
