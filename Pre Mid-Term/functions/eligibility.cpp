#include<iostream>
using namespace std;

string eligibility(int x){
    string a="You are eligible to vote."; 
    string b="You are not eligible to vote.";
    if(x>=18)
        return a;
    else
        return b;
}

int main(){
    int x;
    cout<<"Enter your age : ";
    cin>>x;
    cout<<eligibility(x);
    return 0;
}