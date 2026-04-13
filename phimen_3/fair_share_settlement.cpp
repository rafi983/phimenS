#include <iostream>

using namespace std;

void solve() {
    int N, K;
    cin >> N >> K;

    int share = N / (K + 1);
    int reimbursed = K * share;
    int net_payment = N - reimbursed;

    cout << net_payment << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
