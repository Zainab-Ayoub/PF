#include <iostream>
#include <cstring>
using namespace std;

// Function to search for a string in an array of pointers to strings
void search_string(const char** p[], int size, const char* target) {
    int num = 0;
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < size; i++) {
            if (strcmp(p[j][i], target) == 0) {
                cout << "Your entered word found at string " << j + 1 << endl;
                cout << "Your search word is present in this string: " << p[j][i] << endl;
                cout << target << " present at index: " << i << endl;
                num++;
            }
        }
    }
    if (num == 0) {
        cout << "Nothing found" << endl;
    }
}

int main() {
    // Array of pointers to strings
    const char* string1[] = {"apple", "banana", "cherry", "date"};
    const char* string2[] = {"march", "hello", "my name", "star"};
    const char* string3[] = {"view", "edit", "file", "help"};
    const char** p[] = {string1, string2, string3};
    int size = sizeof(string1) / sizeof(string1[0]);

    char target[100];
    cout << "Enter a string to search for: ";
    cin >> target;

    search_string(p, size, target);

    return 0;
}
