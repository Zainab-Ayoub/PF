#include<iostream>
using namespace std;

int main(){
    int rows, cols;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>cols;

    int** arr = new int* [rows];
    int** transpose = new int* [cols];

    for (int i=0; i<rows; i++){
        arr[i] = new int [cols];
    }
    for (int i=0; i<cols; i++){
        transpose[i] = new int [rows];
    }
    cout<<"Enter values of array: "<<endl;
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            transpose[j][i] = arr[i][j];
        }
    }
    cout<<"The transpose is: "<<endl;
    for (int i=0; i<cols; i++){
        for (int j=0; j<rows; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i=0; i<rows; i++){
        delete [] arr[i];
    }
    delete [] arr;
    for (int i=0; i<cols; i++){
        delete [] transpose[i];
    }
    delete [] transpose;
}
