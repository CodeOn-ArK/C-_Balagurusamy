#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ofstream outf("/dev/TEMP");

  // TODO: Needs better error reporting
  if (outf.fail()) {
      cout << "Couldn't open the file!" << endl;
      return 1;
  }

  cout << "Enter Item Details\n";
  char name[30];
  cin >> name;

  outf << name << "\n";

  cout << "Enter Item cost\n ";
  float cost;
  cin >> cost;

  outf << cost << endl;
  outf.close();

  ifstream inf("/dev/TEMP");

  // TODO: Needs better error reporting
  if (inf.fail()) {
      cout << "Couldn't open the file!" << endl;
      return 1;
  }

  inf >> name;
  inf >> cost;
  cout << endl;
  cout << "Item name: " << name << endl;
  cout << "Item cost: " << cost << endl;

  inf.close();

  return 0;
}
