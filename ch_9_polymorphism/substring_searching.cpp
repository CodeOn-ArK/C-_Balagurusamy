#include <cstring>
#include <iostream>

using namespace std;

int main() {
  int m = 0, size = 0;
  char *str;
  int len = strlen(str);

  cout << "\nEnter the string size\n";
  cin >> size;

  str = new char[size];
  cout << "\nEnter string \n";
  cin >> str;

  char *head;
  char *substr = new char[len];
  head = substr;

  cout << "\nEnter the substring u wanna search\n";
  cin >> substr;

  for (int i = 0; i < len; i++) {
    if (*substr == str[i])
      for (; (*substr != '\0' || str[i] != '\0');) {
        if (*substr++ == str[i++]) {
          m++;
        } else {
          substr = head;
          break;
        }
      }

    if (m == strlen(head)) {
      cout << "string found\n";
      break;
    }

    m = 0;
  }
}
