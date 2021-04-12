#include <stdio.h>

#include <iostream>

using namespace std;

int main() {
  int roll;
  char name[20], branch[20];

  cout << "\nEnter your name\n";
  cin >> name;

  cout << "\nEnter branch\n";
  cin >> branch;

  cout << "\nEnter roll\n";
  cin >> roll;

  cout << "\nYour branch, name and roll is\n"
       << branch << endl
       << name << endl
       << roll << endl;
}
