#include <iostream>
using namespace std;

void solve() {
    int X;
    cin >> X;
    int remainder = X % 4;
    if (remainder == 0) {
        cout << "North" << endl;
    } else if (remainder == 1) {
        cout << "East" << endl;
    } else if (remainder == 2) {
        cout << "South" << endl;
    } else {
        cout << "West" << endl;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
