// Write a C++ program to dynamically allocate an array of integers and strings and initialize its elements.

#include<iostream>
using namespace std;
int main(){
    
 // integer
    int x[5] = {5,10,15,20,25};
    int *y = new int[5];

    for(int i=0; i<5; i++){
        y[i] = x[i];
        cout << y[i] << " ";
    }
    cout<<endl;
    delete [] y;

 // string
    string a = "Hello World!";
    string *b = new string[20];
    for(int j=0; j<12; j++){
        b[j] = a[j];
        cout << b[j];
    }
    // for (int j = 0; j < a.length(); j++) {
    //     b[j] = a[j];
    //     cout << b[j];
    // }
    cout<<endl;
    delete [] b;

    return 0;
}