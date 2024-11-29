#include <iostream>
using namespace std;

int main() {
    int arr1[4][4] = {{9, 2, 7, 6},
                      {3, 6, 8, 3},
                      {7, 5, 6, 2},
                      {5, 8, 7, 3}};
    
    int arr2[16];  // To store all elements from 2D array
    int freq[16] = {0}; // To store frequencies of the elements
    int count[16] = {0}; // To store counts for each element
    int uniqueCount = 0;

    // Flatten the 2D array into a 1D array
    int k = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr2[k] = arr1[i][j];
            k++;
        }
    }

    // Count the frequencies
    for (int i = 0; i < 16; i++) {
        int num = 0;
        // Check if arr2[i] is already in the freq array
        for (int j = 0; j < uniqueCount; j++) {
            if (arr2[i] == freq[j]) {
                num = 1; // Mark as found
                break;
            }
        }
        
        // If arr2[i] is not found, add it to freq array
        if (num == 0) {
            freq[uniqueCount] = arr2[i];
            count[uniqueCount]++;
            // Count occurrences in the rest of arr2
            for (int j = i + 1; j < 16; j++) {
                if (arr2[i] == arr2[j]) {
                    count[uniqueCount]++;
                }
            }
            uniqueCount++; // Increment unique element count
        }
    }

    // Print the frequencies
    cout << "Element frequencies:\n";
    for (int i = 0; i < uniqueCount; i++) {
        cout << freq[i] << ": " << count[i] << endl;
    }

    return 0;
}
