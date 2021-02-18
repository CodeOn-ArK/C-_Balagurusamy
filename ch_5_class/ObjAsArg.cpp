#include <iostream>

using namespace std;

class Time {
  int hours;
  int min;

 public:
  void getTimes(int h, int m) {
    hours = h;
    min = m;
  }

  void putTime(void) {
    cout << hours << "hours and\t";
    cout << min << "minutes \n";
  }

  void sum(Time t1, Time t2);
};

void Time::sum(Time t1, Time t2) {
  this->min = t1.min + t2.min;
  this->hours = min / 60;

  this->min = min % 60;

  this->hours += t1.hours + t2.hours;
}

int main() {
  Time T1, T2, T3;

  T1.getTimes(3, 30);
  T2.getTimes(2, 34);

  T3.sum(T1, T2);

  cout << "T1  =  ";
  T1.putTime();
  cout << "T2  =  ";
  T2.putTime();
  cout << "T3  =  ";
  T3.putTime();

  return 0;
}
