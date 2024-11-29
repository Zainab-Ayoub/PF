#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("text.txt");
    if (!file.is_open()) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    string word;
    int wordCount = 0;

    while (file >> word) {
        ++wordCount;
    }

    file.close();

    cout << "The number of words in the file is: " << wordCount << endl;
    return 0;
}