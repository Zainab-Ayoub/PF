// Given a number N, and N numbers, find the maximum number in these N numbers.
// Input
// First line contains a number N (1 ≤ N ≤ 10^3).
// Second line contains N numbers Xi (0 ≤ Xi ≤ 10^9).

#include<iostream>
using namespace std;

void *MinMax(int *x){
   int *max=x;
    for(int i=0; i<5; i++){
        if(*max < *(x+i)){
            max = (x+i);
        }
    }
    cout<<"The maximum number is : "<<*max<<endl;
    int *min=x;
    for(int i=0; i<5; i++){
        if(*min > *(x+i)){
            min = (x+i);
        }
    }
    cout<<"The minimum number is : "<<*min<<endl;
}

int main(){
    int a[5]={34,78,65,143,68};
    int *x = new int[5];

    for(int i=0; i<5; i++){
        x[i]=a[i];
    }

    MinMax(x);
    
    delete [] x;

}