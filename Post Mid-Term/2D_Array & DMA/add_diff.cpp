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
    int** sum = new int* [rows];
    int** diff = new int* [rows];

    for(int i=0; i<rows; i++){
        arr1[i] = new int[cols];
        arr2[i] = new int[cols];
        sum[i] = new int[cols];
        diff[i] = new int[cols];
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
    cout<<"The sum is: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j]; 
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"The difference is: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            diff[i][j] = arr1[i][j] - arr2[i][j]; 
            cout<<diff[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<rows; i++){
        delete [] arr1[i];
        delete [] arr2[i];
        delete [] sum[i];
        delete [] diff[i];
    }
    delete [] arr1;
    delete [] arr2;
    delete [] sum;
    delete [] diff;
}
