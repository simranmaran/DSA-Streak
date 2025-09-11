#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial of negative number does not exist." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i; // multiply i with previous result
        }
        cout << "Factorial of " << n << " is: " << factorial << endl;
    }

    return 0;
}
