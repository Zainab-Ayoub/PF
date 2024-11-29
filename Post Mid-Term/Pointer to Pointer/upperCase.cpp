// Write a function that modifies a string to uppercase using a pointer to a pointer to a char.
                                                                                                             
#include<iostream>
#include<cctype>
using namespace std;

void upperCase(char** p){
   char *s = *p;
   while(*s){
    *s = toupper(*s);
    s++;
   }
}
                                                                                                                                               
int main(){
    char str[] = "Hello, World!";
    char* ptr = str;
    cout<<"Before: "<<str<<endl;
    upperCase(&ptr);
    cout<<"After: "<<str<<endl;
}

// #include <iostream>

// void toUpperCase(char** str) {
//     char* s = *str;
//     while (*s) {
//         if (*s >= 'a' && *s <= 'z') {
//             *s = *s - 'a' + 'A';
//         }
//         s++;
//     }
// }

// int main() {
//     char str[] = "hello world";
//     char* ptr = str;

//     std::cout << "Before: " << str << std::endl;

//     toUpperCase(&ptr);

//     std::cout << "After: " << str << std::endl;

//     return 0;
// }
