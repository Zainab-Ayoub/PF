//Q.4) Write a program in C++ that create a text file reads no’s from the text file and prints the no that appear the most in file.


#include<iostream>
#include<fstream>
using namespace std;
int main(){
   
   ofstream cFile("readNumber.txt");
   cFile<<"2 4 5 6 5 3 5 9 8 5 2 3";
   cFile.close();

   ifstream rFile("readNumber.txt");
   int a[12];
   for(int i=0;i<10;i++)
        rFile >> a[i];
    rFile.close();
   int max=0, f=0, count;
   for(int i=0;i<10;i++){
        count = 0;
        for(int j=0;j<10;j++){
            if(a[i] == a[j])
                count++;
        }
        if(count > max){
            max = count;
            f = a[i];
        }
    }
    cout<<"Most frequently occurring number is: "<<f;
   
    return  0;
}