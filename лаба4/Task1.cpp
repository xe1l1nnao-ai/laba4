#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n (1..20): ";
    cin >> n;

    if (n < 1 || n > 20) {
        cout << "Input error" << endl;
        return 0;
    }

    int totalFine = 0;
    int countBigFine = 0;

    for (int i = 1; i <= n; i++) {
        int d;
        cout << "Return " << i << ", days overdue (0..30): ";
        cin >> d;

        if (d < 0 || d > 30) {
            cout << "Input error" << endl;
            return 0;
        }

        int fine;
        if (d <= 5) {
            fine = d * 1;
        }
        else {
            fine = 5 * 1 + (d - 5) * 3;
        }

        cout << "Fine for return " << i << ": " << fine << endl;
        totalFine += fine;
        if (fine > 10) {
            countBigFine++;
        }
    }

    cout << "Total fine: " << totalFine << endl;
    cout << "Returns with fine > 10: " << countBigFine << endl;

    return 0;
}