// Program to Store Information in Structure and Display it in CPP

#include<iostream>
using namespace std;

struct Info{
    string name;
    int rollNo;
    float marks;
};

int main(){
    Info arr[5];

    for(int i=0; i<3; i++){
        cout<<"Student "<<i+1<<": "<<endl;
        cout<<"Enter name: ";
        cin.ignore();
        getline(cin,arr[i].name);
        cout<<"Enter roll number: ";
        cin>>arr[i].rollNo;
        cout<<"Enter marks: ";
        cin>>arr[i].marks;
    }

    for(int i=0; i<3; i++){
        cout<<"Student "<<i+1<<": "<<endl;
        cout<<"Name: "<<arr[i].name<<endl;
        cout<<"Roll Number: "<<arr[i].rollNo<<endl;
        cout<<"Marks: "<<arr[i].marks<<endl;
    }
}