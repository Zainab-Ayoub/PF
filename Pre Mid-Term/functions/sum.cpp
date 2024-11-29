#include<iostream>
using namespace std;

int sum(int a, int b){
   return a+b;
}

int main(){
    int a,b;
    cout<<"Enter 1st Number: ";
    cin>>a;
    cout<<"Enter 2nd Number: ";
    cin>>b;
    int s=sum(a,b);
    cout<<"The sum of two numbers is: "<<s;
    return 0;
}