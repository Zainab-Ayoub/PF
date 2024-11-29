#include<iostream>
using namespace std;
int main(){
    int arr1[2][2]={{5,6},{5,6}}, arr2[2][2]={{5,4},{5,4}}, diff[2][2], i, j;
    cout<<"Difference of two matrices is: "<<endl;
    for(i=0; i<2; i++){
       for(j=0; j<2; j++){
          diff[i][j] = arr1[i][j] - arr2[i][j];
          cout<<diff[i][j]<<" ";
       }   
       cout<<endl;
    }     
    return 0;
}