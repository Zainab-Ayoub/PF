// Write a function to create a 2D array, populate it with values, and print it using pointers to pointers.

#include<iostream>
using namespace std;

void allocation(int rows, int cols){
    int** arr = new int* [rows];
    for(int i=0; i<rows; i++){
        arr[i] = new int [cols];
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            arr[i][j] = i * 1 + j;
        } 
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;
    }
    for(int i=0; i<rows; i++){
        delete [] arr;
    }
}

int main(){
    int rows = 3, cols = 3;
    allocation(rows,cols);
}
