#include<iostream>
using namespace std;
void max(const int arr[2][2]){
    int max=0, i, j;
    for(i=0; i<2; i++){
       for(j=0; j<2; j++){
          if(max<arr[i][j])
            max=arr[i][j];
       }   
    }     
    cout<<"The largest number is: "<<max;
}
int main(){
    int arr[2][2]={{15,26},{53,62}};
    max(arr);
}