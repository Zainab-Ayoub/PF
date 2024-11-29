#include <iostream>
#include <cstring>
using namespace std;

int num(char *p) {
   
   int a = 0;
   char *start=p;
   
   while(*p != '\0') {
      p++;
      a += 1;
   }
   
   cout<<"The reverse of string is: ";
   for(int i=a-1; i>=0; i--){
      p[i]=start[i];
      cout<<p[i];
   }

   cout<<endl;

   return a;
}

int main() {
    char *p = new char[100];
    cout << "Enter string: ";
    cin.getline(p, 100);
   
    cout << "Length of string: " << num(p) << endl;

    delete [] p;

    return 0;
}
