#include <iostream>
using namespace std;
int main() {
    int n, key;
    cout << "How many numbers do you want to enter in sorted order? ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers in ascending order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter the number you want to find: ";
    cin >> key;
    int start = 0, end = n - 1;
    int position = -1; 
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == key) {
            position = mid + 1; 
            break;
        } 
        else if (arr[mid] < key) { 
            start = mid + 1;
        } 
        else { 
            end = mid - 1;
        }
    }
    if (position != -1) {
        cout << "Number " << key << " is found at position " << position << "." << endl;
    } else {
        cout << "Number " << key << " is not found in the list." << endl;
    }

    return 0;
}
