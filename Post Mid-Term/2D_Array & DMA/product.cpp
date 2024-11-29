#include<iostream>
using namespace std;

int main(){
    int rows, cols;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;
    
    int** arr1 = new int* [rows];
    int** arr2 = new int* [rows];
    int** prod = new int* [rows];

    for(int i=0; i<rows; i++){
        arr1[i] = new int[cols];
        arr2[i] = new int[cols];
        prod[i] = new int[cols];
    }
    cout<<"Enter values of first array: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr1[i][j]; 
        }
    }
    cout<<"Enter values of second array: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr2[i][j]; 
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            prod[i][j] = 0;
        }
    }
    cout<<"The product is: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            for(int k=0; k<cols; k++)
            prod[i][j] += arr1[i][k] * arr2[k][j]; 
            cout<<prod[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0; i<rows; i++){
        delete [] arr1[i];
        delete [] arr2[i];
        delete [] prod[i];
    }
    delete [] arr1;
    delete [] arr2;
    delete [] prod;
}
