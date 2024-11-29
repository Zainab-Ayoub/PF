// #include<iostream>
// using namespace std;

// void func(int arr[2][3], int r, int c){
//     int i, j, n=0, p=0, z=0;
//     for(i = 0; i < 2; i++) {
//         for(j = 0; j < 3; j++) {
//             if(arr[i][j]<0)
//                 n++;
//             else if(arr[i][j]>0)
//                 p++;
//             else
//                 z++;
//         }
//     }
//     cout<<"No. of positive numbers: "<<p<<endl;
//     cout<<"No. of negative numbers: "<<n<<endl;
//     cout<<"No. of zeroes: "<<z<<endl;
// }

// int main(){
//     const int r = 2, c = 3;
//     int arr[r][c] = {{-7, 0, 8}, {-4, 6, 0}};
//     func(arr, r, c);
// }

#include<iostream>
using namespace std;

void func(int arr[2][3], int r, int c){
    int i, j, n=0, p=0, z=0;
    cout<<"Enter Elements: "<<endl;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            cin>>arr[i][j];
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
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

int main(){
    const int r = 2, c = 3;
    int arr[r][c];
    func(arr, r, c);
}