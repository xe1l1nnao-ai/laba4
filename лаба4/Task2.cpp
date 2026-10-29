#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter n (1..1000000000): ";
    cin >> n;

    if (n < 1 || n > 1000000000LL) {
        cout << "Input error" << endl;
        return 0;
    }

    long long sumOdd = 0;   // positions 1,3,5,... (from right)
    long long sumEven = 0;  // positions 2,4,6,...
    int pos = 1;

    while (n > 0) {
        int digit = n % 10;
        if (pos % 2 == 1) {
            sumOdd += digit;
        }
        else {
            sumEven += digit;
        }
        n /= 10;
        pos++;
    }

    cout << "Sum on odd positions: " << sumOdd << endl;
    cout << "Sum on even positions: " << sumEven << endl;

    if (sumOdd > sumEven) {
        cout << "Sum on odd positions is greater" << endl;
    }
    else if (sumEven > sumOdd) {
        cout << "Sum on even positions is greater" << endl;
    }
    else {
        cout << "Sums are equal" << endl;
    }

    return 0;
}
