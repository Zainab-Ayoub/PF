// Student Mark List Program In C++ Using Array

#include<iostream>
using namespace std;

struct List{
    string name;
    int subjectNo;
    float marks[50];   
};

void info(List* std, int num){
    for(int i=0; i<num; i++){
        cout<<"Name of student "<<i+1<<": "<<(std+i)->name<<endl;
        for(int j=0; j<std[i].subjectNo; j++){
            cout<<"Marks in subject : "<<j+1<<": "<<(std+i)->marks[j]<<endl;
        }
    }
}

int main(){
    int number, subject;
    cout<<"Enter total number of students: ";
    cin>>number;
    if(number<=0){
      cout<<"Enter a valid number.";
      return -1;
    }
    List students[number];
    for(int i=0; i<number; i++){
        cout<<"Enter name of student "<<i+1<<": ";
        cin.ignore();
        getline(cin,students[i].name);
        cout<<"Enter total number of subjects: ";
        cin>>students[i].subjectNo;
        for(int j=0; j<students[i].subjectNo; j++){
            cout<<"Enter marks of subject "<<j+1<<": ";
            cin>>students[i].marks[j];
        }
    }
    info(students,number);
}