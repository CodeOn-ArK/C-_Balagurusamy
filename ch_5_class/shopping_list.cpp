#include <iostream>

using namespace std;

const int m = 50;

class ITEMS {
  int itemCode[m], count;
  float itemPrice[m];

 public:
  inline void CNT(void) { count = 0; }
  void getitem(void);
  void displaySum(void);
  void remove(void);
  void displayItems(void);
};

//========================================================================//

void ITEMS::getitem(void) {
  cout << "\nEnter item code: \n";
  cin >> itemCode[count];
  cout << "\nEnter item cost: \n";
  cin >> itemPrice[count];
  count++;
}

void ITEMS::displaySum(void) {
  float sum = 0;

  for (int i = 0; i < count; i++) sum += itemPrice[i];
  cout << "\nTotal value : \n" << sum << "\n";
}

void ITEMS::remove(void) {
  int a;

  cout << "\nEnter item code\n";
  cin >> a;

  for (int i = 0; i < count; i++) {
    if (itemCode[i] == a) itemPrice[i] = 0;
  }
}

void ITEMS::displayItems(void) {
  cout << "\nCode Price\n";

  for (int i = 0; i < count; i++) {
    cout << "\n" << itemCode[i];
    cout << " " << itemPrice[i];
  }

  cout << "\n";
}

//==========================================================================//

int main() {
  ITEMS order;
  order.CNT();

  int x;

  do {
    cout << "\n1 : Add an item"
         << "\n2 : Display total value"
         << "\n3 : Delete an item"
         << "\n4 : Display all items"
         << "\n5 : Quit"
         << "\nchoose\n";

    cin >> x;

    switch (x) {
      case 1:
        order.getitem();
        break;
      case 2:
        order.displaySum();
        break;
      case 3:
        order.remove();
        break;
      case 4:
        order.displayItems();
        break;
      case 5:
        break;

      default:
        cout << "\nError in input; Please try again\n";
    }
  } while (x != 5);

  return 0;
}
