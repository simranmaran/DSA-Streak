#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int gcd = 1;

    // Find GCD (check common divisors)
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    // Find LCM using formula
    int lcm = (a * b) / gcd;

    // Print result
    cout << lcm << " " << gcd;

    return 0;
}
