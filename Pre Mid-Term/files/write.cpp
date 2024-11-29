//Write a C++ program to create a new text file and write some text into it.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
   
   ofstream myText;
   myText.open("text.txt");
   if(myText.is_open()){
     myText<<"This is the 1st line."<<endl;
     myText<<"This is the 2nd line."<<endl;
     myText<<"This is the 3rd line."<<endl;
     myText.close();
     cout<<"File successfully created."<<endl;
   }
   else
   {
     cout<<"Error opening the file";
   }
   
}