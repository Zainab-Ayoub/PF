//Write a C++ program to find the largest element of a given array of integers.
#include<iostream>
using namespace std;
int main(){
    int arr[2][2]={{15,26},{53,62}}, max=0, i, j;
    for(i=0; i<2; i++){
       for(j=0; j<2; j++){
          if(max<arr[i][j])
            max=arr[i][j];
       }   
    }     
    cout<<"The largest number is: "<<max;
    return 0;
}