#include<iostream>
using namespace std;

float area(float r){
   return 3.14*r*r;
}

float circumference(float r){
   return 2*3.14*r;
}

int main(){
    float r;
    cout<<"Enter the radius of circle: ";
    cin>>r;
    float a=area(r);
    cout<<"The area of the circle is: "<<a<<"\n";
    float c=circumference(r);
    cout<<"The circumference of the circle is: "<<c<<"\n";
    return 0;
}