#include <iostream>

using namespace std;

int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() {
    int x, k;
    cin >> x >> k;

    while (true) {
        if (sum_of_digits(x) % k == 0) {
            cout << x << endl;
            return;
        }
        x++;
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

