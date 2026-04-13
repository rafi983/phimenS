#include <iostream>

using namespace std;

bool is_liked(int n) {
    return (n % 3 != 0) && (n % 10 != 3);
}

void solve() {
    int k;
    cin >> k;

    int count = 0;
    int current_num = 1;

    while (true) {
        if (is_liked(current_num)) {
            count++;
        }
        if (count == k) {
            cout << current_num << endl;
            return;
        }
        current_num++;
    }
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
