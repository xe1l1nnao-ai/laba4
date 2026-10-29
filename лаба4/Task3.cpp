#include <iostream>
using namespace std;

int main() {
    int C;
    cout << "Enter C (1..10): ";
    cin >> C;

    if (C < 1 || C > 10) {
        cout << "Input error" << endl;
        return 0;
    }

    int books = 0;
    int issued = 0;
    int returned = 0;
    int choice;

    do {
        cout << "\nMenu:" << endl;
        cout << "1 - issue a book" << endl;
        cout << "2 - accept a return" << endl;
        cout << "3 - show number of books" << endl;
        cout << "0 - exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (books >= C) {
                cout << "Cannot: limit " << C << " reached" << endl;
            }
            else {
                books++;
                issued++;
                cout << "Issued. Books at reader: " << books << endl;
            }
            break;
        case 2:
            if (books == 0) {
                cout << "Cannot: no books to return" << endl;
            }
            else {
                books--;
                returned++;
                cout << "Return accepted. Books at reader: " << books << endl;
            }
            break;
        case 3:
            cout << "Books at reader: " << books << endl;
            break;
        case 0:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid menu item" << endl;
        }
    } while (choice != 0);

    cout << "Successful issues: " << issued << endl;
    cout << "Successful returns: " << returned << endl;

    return 0;
}
