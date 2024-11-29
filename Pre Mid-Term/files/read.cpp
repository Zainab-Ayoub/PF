#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream readText("text.txt");
    string line;
    while (!readText.eof())
    {
      getline(readText,line);
      cout<<line<<endl;
    }
   return 0;
}