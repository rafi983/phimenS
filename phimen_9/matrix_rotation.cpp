#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_beautiful(int a, int b, int c, int d) {
    return (a < b && c < d && a < c && b < d);
}

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (is_beautiful(a, b, c, d) ||
        is_beautiful(c, a, d, b) ||
        is_beautiful(d, c, b, a) ||
        is_beautiful(b, d, a, c)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
