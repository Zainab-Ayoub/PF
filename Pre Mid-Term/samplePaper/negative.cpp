//Q.1) Write a C++ program to move all negative elements of an array of integers to the end of the array. 
// This is done without changing the order of the positive and negative elements of the array.

#include<iostream>
using namespace std;
int main(){
    int a[6]={4,-2,3,-7,6,-9}, i, j=0, a[6], b[6], x=6;
    // cout<<"Enter Integers: ";
    // for(i=0; i<=5; i++){
    //     cin>>a[i];
    // }
    int arr=a[0];
    for(i=0; i<=5; i++){
        if(a[i]>0){
            b[j]=a[i];    
            j++;
        }   
    }
    for(i=0; i<=5; i++){
        if(a[i]<0){
            b[j]=a[i];    
            j++;   
        }    
    }
    
    cout<<"The arranged array is: "<<endl;
    j=0;
    for(i=0; i<x; i++){
        a[i]=b[i];
    }
     for(i=0; i<x; i++){
        cout<<a[i]<<" ";
    }

    return 0;
} 