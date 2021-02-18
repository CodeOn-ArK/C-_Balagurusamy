#include<iostream>

using namespace std;

class Point
{
  private:
    int x,y;

  public:
    Point(int a, int b)  //inline parameterized constructor definition
    {
      x = a;
      y = b;
    }

    void display()
    {
      cout << "(" << x << "," << y << ")";
    }

};

int main()
{
  Point p1(1,1);
  Point p2(5,10);

  cout << "Point p1 = ";
  p1.display();

  cout << "\nPoint p2 = ";
  p2.display();

  return 0;
}
