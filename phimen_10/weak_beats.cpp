#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    if (cin >> s) {
        bool ok = true;
        for (int i = 1; i < 16; i += 2) {
            if (s[i] != '0') {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
