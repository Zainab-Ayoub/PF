#include <iostream>
using namespace std;

int main() {
    const char* arr1 = "Pakistan";
    const char* arr2 = "New Zealand";
    const char* arr3 = "Austalia";
    const char* arr[3] = {arr1, arr2, arr3};
    
    string search;  
    
    cout << "Enter a country you want to search: ";
    getline(cin,search);
    int j;
    for (j = 0; j < 3; j++) {
            if (search == arr[j]) {
                cout << "The number is found in array " << (j + 1) << endl;
                break;
        }
    }
    if (search != arr[j]) {
        cout << "Not found" << endl;
    }
    
    return 0;
}
