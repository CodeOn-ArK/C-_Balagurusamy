#include<iostream>
#include<stdio.h>

using namespace std;

typedef struct{
  int employee_no, salary;
  char dept[20], name[20];
}employe;

employe employee[5];

void input(employe *);
void display(employe **);

int temp, avr;

int main()
{

  input(employee);
  highest(employee);

  return 1;
}

void input(employe *ptr)
{
  ptr = employee;
  
  while(ptr < employee + 3)
  {
    cout << "\nEnter your name\n";
    cin >> ptr->name;

    cout << "\nEnter your employee ID\n";
    cin >> ptr->employee_no;

    cout << "\nEnter your dept\n";
    cin >> ptr->dept;
    
    cout << "\nEnter your salary\n";
    cin >> ptr->salary;

    ptr++;
  }
}

void display(employe *ptr)
{
  ptr = employee;

  while(1)
  {
    if(ptr->salary <= 10000)
      
  }

}
