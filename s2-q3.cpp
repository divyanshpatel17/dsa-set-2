// 3)Given an integer array nums and an integer k, return the kth largest element in the array.
// Note that it is the kth largest element in the sorted order, not the kth distinct element.
// Solve it without sorting.
// Example:
// Input: nums = [3,2,1,5,6,4], k = 2
// Output: 5

#include <iostream>
using namespace std;

const int MIN_VALUE = -1000000;

int findKthLargest(int arr[], int n, int k) {
    int maxElement;

    for (int i = 0; i < k; i++) {
        maxElement = MIN_VALUE;

        for (int j = 0; j < n; j++) {
            if (arr[j] > maxElement) {
                maxElement = arr[j];
            }
        }

        for (int j = 0; j < n; j++) {
            if (arr[j] == maxElement) {
                arr[j] = MIN_VALUE;
                break;
            }
        }
    }

    return maxElement;
}

int main() {
    int arr[] = {3, 2, 1, 5, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    
    int result = findKthLargest(arr, n, k);
    cout << "The " << k << "th largest element is: " << result << endl;
    
    return 0;
}
