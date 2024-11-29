#include <iostream>
using namespace std;

int main() {
    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {5, 6, 7, 8};
    int arr3[4] = {9, 8, 11, 12};
    int* arr[3] = {arr1, arr2, arr3};
    
    int search, f = 0;  
    
    cout << "Enter a number you want to search: ";
    cin >> search;
   
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 4; i++) {
            if (search == arr[j][i]) {
                cout << "The number is found in array " << (j + 1) << " at index " << (i + 1) << endl;
                f++;
            }
        }
    }
    
    if (f > 0) {
        cout << "Frequency: " << f << endl;
    } else {
        cout << "Number not found." << endl;
    }
    
    return 0;
}
