#include<iostream>
using namespace std;
void largestThree(const int arr[3][3]){
   int first = -1, second = -1, third = -1, i, j;
   for(i=0; i<3; i++){
       for(j=0; j<3; j++){
          if(first < arr[i][j]){
            third = second;
            second = first;
            first = arr[i][j];
          }
          else if(first > arr[i][j] && arr[i][j] > second){
            third = second;
            second = arr[i][j];
          }
          else if(first > arr[i][j] && arr[i][j] < second){
            third = arr[i][j];
          }
       }
   }
   cout<<"The first largest element is: "<<first<<endl;
   cout<<"The second largest element is: "<<second<<endl;
   cout<<"The third largest element is: "<<third<<endl;
}
int main(){
   int arr[3][3] = {{56,15,26},{45,53,62},{73,35,69}};
   largestThree(arr);
}