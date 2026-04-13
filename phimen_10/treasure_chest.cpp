#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string s;
    if (cin >> n >> s) {
        bool inside = false;

        for (char c : s) {

            if (c == '|') {
                inside = !inside;

            } else if (c == '*') {

                if (inside) {
                    cout << "in\n";
                } else {
                    cout << "out\n";
                }

                break;
            }
        }
    }
    return 0;
}
