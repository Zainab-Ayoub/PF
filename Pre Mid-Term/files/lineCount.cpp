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

    string line;
    int lineCount = 0;

    while (getline(file, line)) {
        ++lineCount;
    }

    file.close();

    cout << "The number of lines in the file is: " << lineCount << endl;
    return 0;
}
