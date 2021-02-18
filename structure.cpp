#include<iostream>
#include<stdio.h>

using namespace std;

typedef struct{
  char name[30];
  char branch[20];
  int roll;
}details;

void display(details *);

int main()
{
  details student, *ptr;
  ptr = &student;

  cout << "\nEnter your name\n";
  cin >> ptr->name;

  cout << "\nEnter  your branch\n";
  cin >> ptr->branch;

  cout << "\nEnter your roll\n";
  cin >> ptr->roll;

  display(&student);

  return 1;
}

void display(details *student)
{

  cout << "\nYour name is \n" << student->name;
  cout << "\nYour branch is \n" << student->branch;
  cout << "\nYour roll is \n" << student->roll;
}
