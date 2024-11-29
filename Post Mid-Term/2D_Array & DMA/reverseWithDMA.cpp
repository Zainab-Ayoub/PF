#include <iostream>
#include <cstring> 
using namespace std;

void reverse(char** arr) {
    char* start = *arr;
    char* end = *arr;
    while (*end != '\0') {
        end++;
    }
    end--;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    const char* input = "Hello!";
    int length = strlen(input) + 1; 
    char* arr = new char[length];
    strcpy(arr, input);
    char** ptr = &arr;
    reverse(ptr);
    cout << "The reverse of the string is: " << arr << endl;
    delete[] arr;

    return 0;
}
