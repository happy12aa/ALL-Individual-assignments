#include <iostream>
using namespace std;
int findsmallst(int arr[], int size) {
    int minNumber = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < minNumber) {
            minNumber = arr[i];  
        }
    }
    return minNumber;
}
int main() {
    int arr[] = {17, 65, 47, 81, 44, 23, 90, 31}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    int smallst = findsmallst(arr, size);
    cout << "The smallst number in the array is: " << smallst << endl;

    return 0;
}