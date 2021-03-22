#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
<<<<<<< HEAD
  ofstream outf;
=======
  ofstream outf("/dev/TEMP");

  // TODO: Needs better error reporting
  if (outf.fail()) {
      cout << "Couldn't open the file!" << endl;
      return 1;
  }
>>>>>>> 205ae9891713afeee00c977e22cb527f2f51e0cc

  cout << "Enter Item Details\n";
  char name[30];
  cin >> name;

  outf.open("ITEM", ios::binary | ios::nocreate | ios::out);

  if (!outf) cout << "Open failed\n";

  outf << name << "\n";

  cout << "Enter Item cost\n ";
  float cost;
  cin >> cost;

  outf << cost << endl;
  outf.close();

<<<<<<< HEAD
  ifstream inf("ITEM");  // TODO
=======
  ifstream inf("/dev/TEMP");

  // TODO: Needs better error reporting
  if (inf.fail()) {
      cout << "Couldn't open the file!" << endl;
      return 1;
  }
>>>>>>> 205ae9891713afeee00c977e22cb527f2f51e0cc

  inf >> name;
  inf >> cost;
  cout << endl;
  cout << "Item name: " << name << endl;
  cout << "Item cost: " << cost << endl;

  inf.close();
  return 0;
}
