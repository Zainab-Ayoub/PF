//Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

#include<iostream>
using namespace std;
int main(){
    char *c = new char;
    cout << "Enter a character: ";
    cin >> *c;
    if (*c >= '0' && *c <= '9') {
        cout <<*c<<" is digit\n";
    }
    else if ((*c >= 'A' && *c <= 'Z') || (*c >= 'a' && *c <= 'z')) {
        cout << "ALPHABET" << endl;
        if (*c >= 'A' && *c <= 'Z') {
            cout << *c <<" is capital" << endl;
        }
        else {
            cout << *c <<" is small" << endl;
        }
    }
    delete c;
    return 0;
}