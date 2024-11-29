// Q.8) Write a C++ program to take 5 numbers and calculate the most common item as most common 
// and second common and 3rd common and 4th common and 5th common with others 5 no’s 

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    int frequency[SIZE] = {0}; // To count frequency of each number
    int mostCommon[SIZE];

    // Taking 5 numbers as input
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
    }

    // Calculate frequency of each number
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (numbers[i] == numbers[j]) {
                frequency[i]++;
            }
        }
    }

    // Sort numbers by frequency (simple bubble sort)
    for (int i = 0; i < SIZE - 1; ++i) {
        for (int j = 0; j < SIZE - 1 - i; ++j) {
            if (frequency[j] < frequency[j + 1]) {
                // Swap frequency
                int tempFreq = frequency[j];
                frequency[j] = frequency[j + 1];
                frequency[j + 1] = tempFreq;
                // Swap corresponding numbers
                int tempNum = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = tempNum;
            }
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        mostCommon[i] = numbers[i];
    }

    cout << "Numbers ranked by frequency:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Rank " << i + 1 << ": Number " << mostCommon[i] << " (Frequency: " << frequency[i] << ")" << endl;
    }

    return 0;
}