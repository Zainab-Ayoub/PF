#include <iostream>
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
    char arr[] = "Hello!";
    char* ptr = arr;
    reverse(&ptr);
    cout << "The reverse of the string is: " << arr << endl;
    return 0;
}
