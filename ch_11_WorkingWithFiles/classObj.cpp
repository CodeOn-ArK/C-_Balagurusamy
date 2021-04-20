#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

/********************-CLASS-**********************/

class INVENTORY {
 private:
  char name[10];
  int code;
  float cost;

 protected:
 public:
  void readData(void);
  void writeData(void);
};

/******************-FUNCTIONS-*********************/
void INVENTORY::readData(void) {
  cout << "\nEnter Name\n";
  cin >> name;
  cout << "\nEnter code\n";
  cin >> code;
  cout << "\nENter Cost\n";
  cin >> cost;
}

void INVENTORY::writeData(void) {
  cout << setiosflags(ios::left) << setw(10) << name << setiosflags(ios::right)
       << setw(10) << code << setprecision(2) << setw(10) << cost << endl;
}

/*********************-END-************************/

int main() {
  system("clear");
  INVENTORY item[3];

  fstream file;

  file.open("STOCK.DAT", ios::in | ios::out);
  cout << "\nEnter Details for three items\n";

  for (int i = 0; i < 3; i++) {
    item[i].readData();

    file.write((char *)&item[i], sizeof(item[i]));
  }

  file.seekg(0);
  INVENTORY tom[3];

  cout << "\nOUTPUT\n";
  for (int i = 0; i < 3; i++) {
    file.read((char *)&item[i], sizeof(item[i]));
    item[i].writeData();
  }

  file.close();
  return 0;
}
