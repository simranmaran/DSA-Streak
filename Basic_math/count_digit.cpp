#include <iostream>
using namespace std;

int main() {
    long long num;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num = num / 10;   // last digit remove
            count++;
        }
    }

    cout << "Total digits = " << count;

    return 0;
}
