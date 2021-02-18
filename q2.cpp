#include<iostream>

#define PI 3.1415F
using namespace std;
void area(double r, int x){cout << " \nArea of the circle is \n" << x*r*r ; }
void area(int side ){ cout << "\nArea of the square is \n" << side * side;}
void area(float l, float b){ cout << "\nArea of the rectangle is \n" << l* b;}

int main()
{
  int radius, side, length, breadth;

  cout << "Enter the radius\n";
  cin >> radius;
  area(radius, PI);

  cout << "Enter the side of the square\n";
  cin >> side;
  area(side);

  cout << "Enter the length && breadth of the rectangle\n";
  cin >> length >> breadth;
  area(length, breadth);

  return 0;
}

