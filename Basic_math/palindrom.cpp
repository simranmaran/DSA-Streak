#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    int reverse = 0;

    while (n > 0) {
        int digit = n % 10;      // last digit nikalo
        reverse = reverse * 10 + digit; // reverse me add karo
        n = n / 10;              // last digit hatao
    }

    if (original == reverse)
        cout << "true";
    else
        cout << "false";

    return 0;
}
