#include<iostream>
using namespace std;

int product(int a, int b){
   return a*b;
}

int main(){
    int a,b;
    cout<<"Enter 1st Number: ";
    cin>>a;
    cout<<"Enter 2nd Number: ";
    cin>>b;
    int p=product(a,b);
    cout<<"The product of two numbers is: "<<p;
    return 0;
}