#include<iostream>
using namespace std;
int main(){
    int arr[2][3] = {{-7,0,8},{-4,6,0}}, i, j, n=0, p=0, z=0;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j]<0)
             n++;
            else if(arr[i][j]>0)
             p++; 
            else
             z++; 
        }
    }
    cout<<"No. of positive numbers: "<<p<<endl;
    cout<<"No. of negative numbers: "<<n<<endl;
    cout<<"No. of zeroes: "<<z<<endl;
}