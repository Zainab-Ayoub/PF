#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {{4,5,2},{6,7,2},{2,6,4}}, i, j, k, l;
    int mostRepeatingElement = arr[0][0];
    int maxCount = 0;

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            int currentElement = arr[i][j];
            int count = 0;

            for (k = 0; k < 3; ++k) {
                for (l = 0; l < 3; ++l) {
                    if (arr[k][l] == currentElement) {
                        count++;
                    }
                }
            }

            if (count > maxCount) {
                maxCount = count;
                mostRepeatingElement = currentElement;
            }
        }
    }

    cout << "The most repeating element is: " << mostRepeatingElement << endl;
    return 0;
}
