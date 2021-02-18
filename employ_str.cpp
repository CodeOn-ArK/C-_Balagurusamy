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
void average(employe *);
void highest(employe *);

int temp, avr;

int main()
{

  input(employee);
  average(employee);
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

  void (*func_ptr)(employe *);

  func_ptr = average;
  func_ptr(employee);
}

void highest(employe *ptr)
{
 int high;
 employe *highest;

 high = ptr->salary;
 while(ptr < employee + 3)
 {
   if(high < ptr->salary)
   {
     high = ptr->salary;
     highest = ptr;
   }

   ptr++;
 }

 display(&highest);
}

void average(employe *ptr)
{
  int i = 0;
  
  while(ptr < employee + 3)
  {
    avr += (ptr++)->salary;
    i++;
  }
  
  avr /= 5;
}

void display(employe **ptr)
{
  cout << "\nThe name is\n"  << (*ptr)->name;
  cout << "\nSalary is \n" << (*ptr)->salary;
  cout << "\nEmployee number is\n" << (*ptr)->employee_no;
}
