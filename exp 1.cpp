#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    if (isupper(c)) {
        cout << c << " is an uppercase letter." << endl;
    } else if (islower(c)) {
        cout << c << " is a lowercase letter." << endl;
    } else if (isdigit(c)) {
        cout << c << " is a digit." << endl;
    } else {
        cout << c << " is a special character." << endl;
    }

    return 0;
}
