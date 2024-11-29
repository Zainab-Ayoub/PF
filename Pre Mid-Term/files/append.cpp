#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream file("text.txt", ios::app);  // Open the file in append mode
    if (!file.is_open()) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    string newData;
    cout << "Enter the data you want to append to the file: ";
    getline(cin, newData);  // Get new data from the user

    file << newData << endl;  // Append the new data to the file

    file.close();  // Close the file

    cout << "Data appended successfully." << endl;
    return 0;
}
