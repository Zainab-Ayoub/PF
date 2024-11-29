#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

void upperCase(char** p) {
    char* s = *p;
    while (*s) {
        *s = toupper(*s);
        s++;
    }
}

int main() {
    const char* originalStr = "Hello, World!";
    int length = strlen(originalStr) + 1; 
    char* str = new char[length];
    strcpy(str, originalStr);

    char* ptr = str;
    cout << "Before upperCase: " << str << endl;
    upperCase(&ptr);
    cout << "After upperCase: " << str << endl;

    delete[] str;

    return 0;
}
