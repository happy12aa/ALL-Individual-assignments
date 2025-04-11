#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        // If there are fewer than 2 elements, there's no second largest element
        return -1;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Traverse the array to find the largest and second largest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest == INT_MIN ? -1 : secondLargest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, n);
    if (secondLargest != -1) {
        cout << "The second largest element is " << secondLargest << endl;
    } else {
        cout << "No second largest element exists." << endl;
    }

    return 0;
}