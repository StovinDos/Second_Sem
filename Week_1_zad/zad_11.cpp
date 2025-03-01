#include <iostream>
using namespace std;

void printPermissions(int permission) {
    cout << ((permission & 4) ? "r" : "-");
    cout << ((permission & 2) ? "w" : "-");
    cout << ((permission & 1) ? "x" : "-");
}

int main() {
    int permission;
    cout << "Enter a number representing access permissions (decimal): ";
    cin >> permission;

    if (permission < 0 || permission > 7) {
        cout << "Invalid permission value. Must be between 0 and 7." << endl;
        return 1;
    }

    cout << "Access permissions are: ";
    printPermissions(permission);
    cout << endl;

    return 0;
}