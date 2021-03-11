#include <cstring>
#include <iostream>

using namespace std;

/********************-CLASS-**********************/

class city {
 private:
 protected:
  char *name;
  int len;

 public:
  city() {
    len = 0;
    name = new char[len + 1];
  }
  void getname(void) {
    char *s;
    s = new char[30];

    cout << "\nEnter city name\n";
    cin >> s;

    len = strlen(s);
    name = new char[len + 1];

    strcpy(name, s);
  }

  void printName(void) { cout << name << endl; }
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/

int main() {
  city *cptr[10];

  int n = 0;
  int option;

  do {
    cptr[n] = new city;
    cptr[n]->getname();

    n++;

    cout << "\nDo you want to enter one or more name?\n";
    cin >> option;
  } while (option);

  cout << "\n\n";
  for (int i = 0; i < n; i++) {
    cptr[i]->printName();
  }

  return 0;
}
