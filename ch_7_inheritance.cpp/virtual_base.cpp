#include <iostream>

using namespace std;

/******************-CLASS-**************************/

class student {
 private:
 protected:
  int roll;

 public:
  student() { cout << "\nstudent called\n"; }
  void get_number(int a) { roll = a; }

  void put_number(void) { cout << "Roll No. " << roll << endl; }
};

/*****************-FUNCTIIONS-**********************/

/*********************-END-*************************/
/******************-CLASS-**************************/

class test : public virtual student {
 private:
 protected:
  float part1, part2;

 public:
  test() { cout << "\ntest called\n"; }
  void get_marks(float x, float y) {
    part1 = x;
    part2 = x;
  }

  void put_marks(void) {
    cout << "Marks obtained: " << endl
         << "Part1  =  " << part1 << endl
         << "Part2  =  " << part2 << endl;
  }
};

/*****************-FUNCTIIONS-**********************/

/*********************-END-*************************/

/******************-CLASS-**************************/
class nominal : public test {
 private:
 protected:
 public:
  nominal() { cout << "\nnominal called\n"; }
};

/*****************-FUNCTIIONS-**********************/
/*****************-END-*************************/

/******************-CLASS-**************************/

class sports : public virtual student {
 private:
 protected:
  float score;

 public:
  sports() { cout << "\nsports called\n"; }
  void get_score(float s) { score = s; }

  void put_score(void) { cout << "Sports wt: " << score << endl; }
};

/*****************-FUNCTIIONS-**********************/

/*********************-END-*************************/

/******************-CLASS-**************************/

class result : public nominal, public sports {
 private:
  float total;

 protected:
 public:
  result() { cout << "\nresult called\n"; }
  void display(void);
};

/*****************-FUNCTIIONS-**********************/

void result::display() {
  total = part1 + part2 + score;

  student::put_number();
  put_marks();
  put_score();

  cout << "Total score: " << total << endl;
}

/*********************-END-*************************/
int main() {
  result stud;

  stud.student::get_number(100);
  stud.get_marks(10, 20);
  stud.get_score(303.3);

  stud.display();

  return 0;
}
