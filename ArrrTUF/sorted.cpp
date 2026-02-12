#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // If current element is greater than next, it's not sorted
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n)) {
        cout << "The array is sorted in ascending order.\n";
    } else {
        cout << "The array is not sorted.\n";
    }
}
