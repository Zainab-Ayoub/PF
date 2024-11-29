// Given a number N and an array A of N numbers. Print the numbers after sorting them.

#include<iostream>
using namespace std;
int main(){
    
    int size, i, j, temp;
    cout<<"Enter Size: ";
    cin>>size;
    int *array = new int[size];
    
    cout<<"Enter values in array: ";
    for(i=0; i<size; i++)
       cin>>array[i];
    
    cout<<"Original Array is: ";
    for(i=0; i<size; i++)
       cout<<array[i]<<"\t";
    cout<<endl;

    //sorting
    for(i=0; i<size; i++){
        for(j=0; j<size-1; j++){
            if (array[j]>array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    cout<<"Sorted Array is: ";
    for(i=0; i<size; i++)
       cout<<array[i]<<"\t";

    delete [] array;

    return 0;
}