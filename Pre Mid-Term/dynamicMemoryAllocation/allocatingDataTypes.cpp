//Write a C++ program to dynamically allocate an integer, a character and a string and assign a value to them.

#include<iostream>
#include <string>
using namespace std;

int main(){

//  integer
  int a=10;
  int *b = new int;
  *b = a;
  cout<<"The integer using DMA is "<<*b<<endl;
  delete b;

//  character
  char c = 'A';
  char *d = new char;
  *d = c;
  cout<<"The character using DMA is "<<*d<<endl;
  delete d;

//  string
  string e = "Hi there!";
  string *f = new string;
  *f = e;
  cout<<"The string using DMA is "<<*f<<endl;
  delete f;

  return 0;
}