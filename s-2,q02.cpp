// 02)Given an integer array arr[] of size n, the task is to find the count inversions of the given array.
// Two array elements arr[i] and arr[j] form an inversion if arr[i] > arr[j] and i < j.
// Input: arr[] = {7, 2, 6, 3}
// Output: 4
// Explanation: Given array has 4 inversions: (7, 2), (7, 6), (7, 3), (6, 3)
#include <iostream>
using namespace std;
int countInversions(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++; // Inversion found
            }
        }
    }
    return count;
}
int main() {
    int arr[] = {7, 2, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of inversions: " << countInversions(arr, n) << endl;
    return 0;
}
