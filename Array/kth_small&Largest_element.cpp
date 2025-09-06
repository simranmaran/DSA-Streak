#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int i = 0, j = n - 1;

    while (i < j) {
        if (arr[i] < 0) {   // Left already negative, सही जगह है
            i++;
            continue;
        }
        if (arr[j] >= 0) {  // Right already positive, सही जगह है
            j--;
            continue;
        }

        // Swap arr[i] और arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    cout << "Rearranged array: ";
    for (int k = 0; k < n; k++)
        cout << arr[k] << " ";
    cout << endl;

    return 0;
}
