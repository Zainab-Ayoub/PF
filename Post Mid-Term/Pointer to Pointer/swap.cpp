// Write a function to swap two integers using pointers to pointers.

#include<iostream>
using namespace std;

void swap(int** x, int** y){
    int* temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a=5, b=10;
    int* ptr1 = &a;
    int* ptr2 = &b; 
    swap(*ptr1,*ptr2);
    cout << *ptr1 << endl << *ptr2 << endl;
}