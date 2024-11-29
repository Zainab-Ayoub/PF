// program for the addition of two distances using structure in CPP 

#include<iostream>
using namespace std;

struct distance
{
    int feets;
    float inches;
};


int main(){
    distance d1, d2, add;
    
    cout<<"Enter first distance: "<<endl;
    cout<<"Enter feets: ";
    cin>>d1.feets;
    cout<<"Enter inches: ";
    cin>>d1.inches;

    cout<<"Enter second distance: "<<endl;
    cout<<"Enter feets: ";
    cin>>d2.feets;
    cout<<"Enter inches: ";
    cin>>d2.inches;

    add.feets = d1.feets + d2.feets;
    add.inches = d1.inches + d2.inches;

    if(add.inches>12){
        ++add.feets;
        add.inches -= 12;
    }

    cout<<"The distance is "<<add.feets<<" feets and "<<add.inches<<" inches.";
}