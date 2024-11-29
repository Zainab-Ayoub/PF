#include<iostream>
#include <string>
using namespace std;
// Function to search for a string in an array of pointers to strings
int search_string(char** p[], int size, char* target) {
	int num=0;
  for (int j = 0; j < 3; j++) {	
    for (int i = 0; i < size; i++) {
        if ((p[j][i])== **target) {
        	cout<<"your entered word found at "<<j+1 <<" string"<<endl;
        	cout<<"your search word is present in this string :"<<(p[j][i])<<endl;
        	cout<<**target <<" present at index: "<<i<<endl;
			num++;
			}
        
        }
    }
    if(num==0){
    	cout<<" nothing found "<<endl;
	}
}
int main() {
    // Array of pointers to strings
    char* string1[] = {"apple", "banana", "cherry", "date"};
    char* string2[]={"march","hello","my name","star"};
    char* string3[]={"view","edit","file","help"};
    char** p[]={string1,string2,string3};
    int size = sizeof(string1) / sizeof(string1[0]);
    char* target[100];
    cout << "Enter a string to search for: ";
    cin >> target;
    search_string(p, size, target);
}    