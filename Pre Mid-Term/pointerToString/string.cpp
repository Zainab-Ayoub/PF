#include <iostream>
using namespace std;

int main() {
   char str[] = "A string.";
   char *p = str;

   cout << str[0] <<' '<< *p <<' '<<p[3]<<"\n";
   p += 2;
   cout <<*p<<' '<< p[2] <<' '<< p[5];

   return 0;
}