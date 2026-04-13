#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    if (cin >> n >> q) {
        vector<long long> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;
            pref[i] = pref[i - 1] + x;
        }

        for (int i = 0; i < q; i++) {
            int a, b;
            cin >> a >> b;
            cout << pref[b] - pref[a - 1] << "\n";
        }
    }
    return 0;
}
