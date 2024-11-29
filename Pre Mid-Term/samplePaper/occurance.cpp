//Q.5) Write a C++ program to count the number of occurrences of a given number in a sorted array of integers.


#include<iostream>
using namespace std;

int main(){
     int a[10]={4,5,3,7,5,2,9,5,4,9}, n, i, j, o=0, temp=0;

    //sorting
    for(i=0; i<10; i++){
        for(j=0; j<10-1; j++){
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    cout<<"Sorted Array is: ";
    for(i=0; i<10; i++)
       cout<<a[i]<<" ";
    
    cout<<endl;

    cout << "Enter a number: " << endl;
    cin >> n;

    //occurrance
    for(int i=0; i<10; i++){
        if(n==a[i])
          o++;
    } 
     cout << "The number "<<n<<" is occurring "<<o<<" times." << endl;

     return 0;
}