#include <iostream>

using namespace std;

int main() {
    string number;
    cin >> number;
    int st = 1;
    char sb = number[0];

    for (int i = 1; i < size(number); i++) {
        char n = number[i];
        if (sb == n) {
            st++;

        }
        else {

            if (st > 1) {
                cout << sb << st;
            }
            else {
                cout << sb;
            }
            st = 1;
            sb = n;
        }
    }

    if (st > 1) {
        cout << sb << st;
    }
    else {
        cout << sb;
    }
    cout << '\n';
    return 0;
}