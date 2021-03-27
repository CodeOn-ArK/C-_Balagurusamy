#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ofstream outf;
  outf.open("ITEM", ios::binary | ios::out);

  if (outf.fail()) {
    cout << "Couldn't open the file!" << endl;
    return 1;
  }

  cout << "Enter Item Details\n";
  char name[30];
  cin >> name;

  if (!outf) cout << "Open failed\n";

  outf << name << "\n";

  cout << "Enter Item cost\n ";
  float cost;
  cin >> cost;

  outf << cost << endl;
  outf.close();

  ifstream inf("ITEM", ios::in);

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
