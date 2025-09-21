#include <iostream>
using namespace std;
int countRotations(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        if (arr[low] <= arr[high])
            return low;
        int mid = (low + high) / 2;
        int next = (mid + 1) % n; 
        int prev = (mid + n - 1) % n; 
        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev])
            return mid;
        if (arr[mid] <= arr[high]) {
            high = mid - 1;
        } else if (arr[mid] >= arr[low]) {
            low = mid + 1;
        }
    }
    return 0;
}
int main() {
    int n;
    cout << "Enter number of elements in circularly sorted array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int rotations = countRotations(arr, n);
    cout << "The array is rotated " << rotations << " times." << endl;
    return 0;
}
