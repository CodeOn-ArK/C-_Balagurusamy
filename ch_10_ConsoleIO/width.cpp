#include <iostream>
using namespace std;

int main() {
  int item[4] = {1, 2, 3, 4};
  int cost[4] = {75, 100, 60, 99};

  system("clear");
  cout.width(7);
  cout << "ITEMS";
  cout.width(8);
  cout << "COST";

  cout.width(15);
  cout << "TOTAL VAL" << endl;

  int sum = 0;

  for (int i = 0; i < 4; i++) {
    cout.width(5);
    cout << item[i];

    cout.width(8);
    cout << cost[i];

    int value = item[i] * cost[i];
    cout.width(15);
    cout << value << endl;
    sum += value;
  }
  cout << endl;

  cout.width(2);
  cout << sum;

  return 0;
}
