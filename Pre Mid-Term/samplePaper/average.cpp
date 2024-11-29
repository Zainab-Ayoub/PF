//Q.6) Write a C++ function that takes the base address of the array and finds the average of the lowest and the highest no and return this value to main.


#include<iostream>
using namespace std;

int avg(int *p){
  int i, max=p[0], min=p[0];
  for(i=1; i<5; i++){
     if(max<p[i])
        max=p[i];
     if(min>p[i])
        min=p[i];   
  }
   int a=(min+max)/2;
   return a;
}

int main(){
	int a[5]={10,20,30,40,50};
    cout<<"The average of lowest and highest number in array is: "<<avg(a);
	return 0;
}