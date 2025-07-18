#include <iostream>
using namespace std;

bool areArraysEqual(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return false; // agar koi bhi element alag mila to false
        }
    }
    return true; // agar sab same hai to true
}

int main() {
    int arr1[] = {1, 2, 3, 9, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr1) / sizeof(arr1[0]); // size nikal rahe

    if (areArraysEqual(arr1, arr2, size)) {
        cout << "Arrays are equal." << endl;
    } else {
        cout << "Arrays are NOT equal." << endl;
    }

    return 0;
}
