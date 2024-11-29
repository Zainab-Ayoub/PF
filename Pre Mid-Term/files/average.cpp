#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream file("numbers.txt");
    if (!file.is_open()) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    int number;
    int sum = 0;
    int count = 0;

    // Read numbers from the file and calculate sum and count
    while (file >> number) {
        sum += number;
        ++count;
    }

    file.close();

    if (count == 0) {
        cerr << "No numbers found in the file" << endl;
        return 1;
    }

    // Calculate the average
    double average = static_cast<double>(sum) / count;

    cout << "Average of numbers in the file: " << average << endl;

    return 0;
}
