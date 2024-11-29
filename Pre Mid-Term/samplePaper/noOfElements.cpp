//Q.2) Write a C++ program to find the element that appears once in an array of integers and every other element appears twice

#include<iostream>
using namespace std;

int main()
{
    int a[7]={3,4,5,2,4,3,5}, b[7], i, j;
    for(i=0,j=0; i<7; i++,j++){
      b[j]=a[i];
    }  
    
    for(i=0; i<7; i++){
    int count=0;
      for(j=0; j<7; j++){
         if(a[i]==b[j]){
            count++;
         }
      }
      if(count==1){
        cout << a[i]<<" appears once." << endl;
      }
    }

    return 0;
}