#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    if(n < 2) {
        cout << "Array must have at least 2 elements.";
        return 0;
    }

    int arr[100];  // assuming max 100 elements
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Find largest
    int largest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Step 2: Find 2nd largest (less than largest)
    int secondLargest = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] != largest) {
            if(secondLargest == -1 || arr[i] > secondLargest) {
                secondLargest = arr[i];
            }
        }
    }

    if(secondLargest == -1) {
        cout << "No second largest element (all elements same)";
    } else {
        cout << "Second largest element is: " << secondLargest;
    }

    return 0;
}
