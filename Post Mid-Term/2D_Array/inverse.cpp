// #include<iostream>
// using namespace std;

// int main(){
//  int a[2][2] = {{3, 5},
//                 {-7, 2}};
//  int d1 = a[0][0] * a[1][1];  
//  int d2 = a[0][1] * a[1][0];  
//  float d = d1 - d2;
//  if (d == 0){
//      cout << "Matrix is not invertible." << endl;
//      return -1;
//  }
//  int adj [2][2];
//      adj[0][0] = a[1][1];
//      adj[0][1] = -a[0][1];
//      adj[1][0] = -a[1][0];    
//      adj[1][1] = a[0][0];
//  float inv[2][2];
//  for (int i=0; i<2; i++){
//     for (int j=0; j<2; j++){
//         inv[i][j] = adj[i][j] / d;
//         cout << inv[i][j] << " ";
//     }
//     cout << endl;
//   }
// }  

#include<iostream>
using namespace std;

int main(){
    int arr[2][2], i, j, rows, cols;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;
    
} 