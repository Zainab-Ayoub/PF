#include<iostream>
using namespace std;
int main(){
	int i, a[6]={1,2,3,4,5,6}, b[6], j=0;
    
	for(i=0; i<6; i++){
		if(a[i]%2==0){
			b[j]=a[i];
		    j++;
		}
	}
	for(i=0; i<6; i++){
		if(a[i]%2!=0){
			b[j]=a[i];
		    j++;
		}
	}
	for(i=0; i<6; i++){
        a[i]=b[i];
    }
    
    cout<<"The arranged array is: "<<endl;
    for(i=0; i<6; i++){
        cout<<a[i]<<" ";
    }
}