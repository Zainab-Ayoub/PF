#include<iostream>
using namespace std;

void sum(const int arr1[2][2], const int arr2[2][2]){
    int sum[2][2];
    for(int i=0; i<2; i++){
       for(int j=0; j<2; j++){
          sum[i][j] = arr1[i][j] + arr2[i][j];
          cout<<sum[i][j]<<" ";
       }   
       cout<<endl;
    }     
}
void diff(const int arr1[2][2], const int arr2[2][2]){
    int diff[2][2];
    for(int i=0; i<2; i++){
       for(int j=0; j<2; j++){
          diff[i][j] = arr1[i][j] - arr2[i][j];
          cout<<diff[i][j]<<" ";
       }   
       cout<<endl;
    }     
}
void prod(const int arr1[2][2], const int arr2[2][2]){
    int result[2][2];
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            result[i][j] = 0;
        }
    }
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            for(int k = 0; k < 2; ++k) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }     
}
void transpose(const int arr[2][2]){
    int transpose[2][2];
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++)
            transpose[j][i] = arr[i][j];
    }  
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++)
            cout<<transpose[i][j]<<" ";
            cout<<endl;
    }
}
void inverse(const int arr[2][2]){
    int d1 = arr[0][0] * arr[1][1];  
    int d2 = arr[0][1] * arr[1][0];  
    float d = d1 - d2;
    if (d == 0){
        cout << "Matrix is not invertible." << endl;
    }
    else{
        int adj [2][2];
        adj[0][0] = arr[1][1];
        adj[0][1] = -arr[0][1];
        adj[1][0] = -arr[1][0];    
        adj[1][1] = arr[0][0];
        float inv[2][2];
        for (int i=0; i<2; i++){
            for (int j=0; j<2; j++){
                inv[i][j] = adj[i][j] / d;
                cout << inv[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int main(){
    int arr[2][2] = {{3, 5},
                   {-7, 2}};
    int arr1[2][2]={{5,6},{5,6}}; 
    int arr2[2][2]={{5,4},{5,4}};
    cout<<"Sum: "<<endl;
    sum(arr1, arr2);
    cout<<endl;
    cout<<"Difference: "<<endl;
    diff(arr1, arr2);
    cout<<endl;
    cout<<"Product: "<<endl;
    prod(arr1, arr2);
    cout<<endl;
    cout<<"Transpose: "<<endl;
    transpose(arr);
    cout<<endl;
    cout<<"Inverse: "<<endl;
    inverse(arr);
    cout<<endl;
}