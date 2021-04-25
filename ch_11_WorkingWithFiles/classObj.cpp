#include <cstring>
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
  char* getName(void);
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
  cout << setw(10) << this->name << setiosflags(ios::right) << setw(10)
       << this->code << setprecision(2) << setw(10) << this->cost << endl;
}

char* INVENTORY::getName(void) { return this->name; }
/*********************-END-************************/

int main() {
  system("clear");
  INVENTORY item[3];

  fstream file;

  file.open("../ch_11_WorkingWithFiles/files/STOCK.DAT", ios::out);
  file.close();

  file.open("../ch_11_WorkingWithFiles/files/STOCK.DAT", ios::in | ios::out);
  cout << "\nEnter Details for three items\n";

  for (int i = 0; i < 2; i++) {
    item[i].readData();

    file.write((char*)&item[i], sizeof(item[i]));
  }

  file.seekg(0);
  INVENTORY tom[3];

  cout << "\n\t\tOUTPUT\n"
       << "-----------------------------------------\n"
       << "\tName"
       << "\tCode"
       << "\tCost\n";
  for (int i = 0; i < 2; i++) {
    file.read((char*)&tom[i], sizeof(tom[i]));
    if (!strcmp(tom[i].getName(), "Saheb")) tom[i].writeData();
  }

  file.close();
  return 0;
}
