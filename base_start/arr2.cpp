#include <iostream>
using namespace std;

int main() {
    int arr[100], n, i;
    int max;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    max = arr[0];  // Pehla element ko max maan liya

    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i]; // agar bada number mile to max update
        }
    }

    cout << "Largest number: " << max;

    return 0;
}
