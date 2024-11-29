#include<iostream>
using namespace std;

void perfect(int i){
int u=1, sum=0, n=0;
    while(i<=1000) 
    {
        while(u<=1000) 
        {
            if(u<i) 
            {
                if (i%u==0) 
                    sum=sum+u; 
            }
            u++; 
        }

        if(sum==i) 
        {
            n++;         
            cout << i << " is a Perfect number." << "\n"; 
        }

        i++; 
        u=1; 
        sum=0; 
    }
    cout << "Number of Perfect numbers between 1 to 1000 is: " <<n<< "\n";
}

int main(){
    int i=1;
    cout<<"Perfect numbers between 1 & 1000 are: "<<endl;
    perfect(i); 
    return 0;
}