#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n]; // Take array input
    // Input array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Insertion Sort Logic
    for(int i = 1; i < n; i++) {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}