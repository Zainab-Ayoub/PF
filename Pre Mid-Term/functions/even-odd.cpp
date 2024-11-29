#include<iostream>
using namespace std;

string check(int n){
  string e="even";
  string o="odd";
  if(n%2==0)
    return e;
  else
    return o;  
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The number is "<<check(n);
    return 0;
}