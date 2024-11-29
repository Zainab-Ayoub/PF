#include<iostream>
using namespace std;
int main() {
   int transpose[2][2], i, j;
   int a[2][2] = { {1, 2} , 
                   {3, 4}};
   cout<<"The matrix is: "<<endl;
   for(i=0; i<2; i++) {
      for(j=0; j<2; j++)
      cout<<a[i][j]<<" ";
      cout<<endl;
   }
   cout<<endl;
   for(i=0; i<2; i++){
   for(j=0; j<2; j++)
      transpose[j][i] = a[i][j];
   }  
   cout<<"Transpose of the matrix: "<<endl;
   for(i=0; i<2; i++) {
      for(j=0; j<2; j++)
      cout<<transpose[i][j]<<" ";
      cout<<endl;
   }
}