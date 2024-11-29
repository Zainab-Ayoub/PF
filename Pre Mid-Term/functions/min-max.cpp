#include<iostream>
using namespace std;

int minimum(int a, int b, int c){
    int min=a;
    if(min>b)
     min=b;
    else if(min>c)
     min=c;
    return min;  
}

int maximum(int a, int b, int c){
    int max=a;
    if(max<b)
     max=b;
    else if(max<c)
     max=c;
    return max;  
}

int main(){
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    cout<<"The minimum number is : "<<minimum(a,b,c)<<"\n";
    cout<<"The maximum number is : "<<maximum(a,b,c)<<"\n";
    return 0;
}