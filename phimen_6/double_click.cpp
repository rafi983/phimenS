#include <iostream>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    int prev;
    cin >> prev;

    for (int i = 1; i < n; i++) {
        int curr;
        cin >> curr;

        if (curr - prev <= d) {
            cout << curr << endl;
            return 0;
        }

        prev = curr;
    }

    cout << -1 << endl;

    return 0;
}
