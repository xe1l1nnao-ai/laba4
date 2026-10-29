#include <iostream>
using namespace std;

int main() {
    int s, p;
    cout << "Enter s (2..8): ";
    cin >> s;
    if (s < 2 || s > 8) {
        cout << "Input error" << endl;
        return 0;
    }

    cout << "Enter p (3..10): ";
    cin >> p;
    if (p < 3 || p > 10) {
        cout << "Input error" << endl;
        return 0;
    }

    int freeCount = 0;

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < p; j++) {
            if (j == 0 || j == p - 1) {
                cout << '#';
            }
            else if ((j - 1) % 3 == 2) {
                cout << 'R';
            }
            else {
                cout << '.';
                freeCount++;
            }
        }
        cout << endl;
    }

    cout << "Free positions (dots): " << freeCount << endl;

    return 0;
}
