//Program for the addition of two complex numbers in CPP

#include<iostream>
using namespace std;

struct Complex{
    float real;
    float imaginary;
};

Complex sum(Complex n1, Complex n2){
    Complex num;
    num.real = n1.real + n2.real;
    num.imaginary = n1.imaginary + n2.imaginary;
    return num;
}

int main(){
    Complex n1, n2, s;
    cout<<"Enter first real and imaginary number respectively: ";
    cin>>n1.real>>n1.imaginary;
    cout<<"Enter second real and imaginary number respectively: ";
    cin>>n2.real>>n2.imaginary;
    s = sum(n1,n2); 
    cout<<"The sum of complex number is: "<<s.real<<" "<<s.imaginary<<"i.";
}