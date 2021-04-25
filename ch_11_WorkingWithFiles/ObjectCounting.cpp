#include <cstring>
#include <fstream>
#include <iostream>

#define CREATEFILE 1
#define READFILE 0

using namespace std;

/********************-CLASS-**********************/

class emp {
 private:
  char name[30];
  int code;

 protected:
 public:
  emp() {}
  emp(const char* n, int c) {
    strcpy(name, n);
    code = c;
  }
  int getcode() { return code; }
  char* getName() { return name; }
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/

const char* fileName = "../ch_11_WorkingWithFiles/files/Employ.dat";

int main() {
  system("clear");
  try {
    if (system("sudo pacman -S")) throw 2;
  } catch (int i) {
    if (i == 2) cout << "\nIllegal code\n";
  }

#ifdef CREATEFILE
  emp e[4];

  e[0] = emp("Amit", 12);
  e[1] = emp("Saheb", 43);
  e[2] = emp("toto", 33);

  fstream file(fileName, ios::out);
  file.close();

  file.open(fileName, ios::in | ios::out);

  for (int i = 0; i < 3; i++) {
    file.write((char*)&e[i], sizeof(e[i]));
  }

  file.close();
#endif

#ifdef READFILE
  emp r[3];

  fstream fileRead(fileName, ios::in);
  for (int i = 0; i < 3; i++) {
    fileRead.read((char*)&r[i], sizeof(r[i]));
    if (!strcmp("toto", r[i].getName())) cout << "\n" << r[i].getcode();
  }

  fileRead.close();
#endif
}
