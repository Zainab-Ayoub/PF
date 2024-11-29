#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter size of array : ";
    cin>>x;
    char a[x], v=0;
    
    cout<<"Enter string: ";
    for(int i=0; i<x; i++){
      cin>>a[i];
    }
    for(int i=0; i<x; i++){
      if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
        v++;
      }
    }
    cout<<"The number of vowels are: "<<v;
    return 0;
}