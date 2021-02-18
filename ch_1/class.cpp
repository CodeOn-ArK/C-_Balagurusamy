#include<iostream>

using namespace std;

class person{

    char name[10];
    int age;

  public:
    void getdata(void);
    void putdata(void);

};

void person::getdata(void)
{
  cout << "Enter the name of the person\t";
  cin >> name;

  cout << "\nEnter the age\t";
  cin >> age;

}

void person::putdata(void)
{
  cout << "The name is\t" << name
    <<"\nThe age is \t" << age << endl;
}

int main()
{
  cout << "Enter details\n";

  person p;
  p.getdata();
  p.putdata();

  return 0;
}
