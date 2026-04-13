#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calculate_score(int a, int b, int c) {
    vector<int> rolls = {a, b, c};
    sort(rolls.rbegin(), rolls.rend());
    return rolls[0] * 100 + rolls[1] * 10 + rolls[2];
}

void solve() {
    int A1, A2, A3, B1, B2, B3;
    cin >> A1 >> A2 >> A3 >> B1 >> B2 >> B3;

    int scoreA = calculate_score(A1, A2, A3);
    int scoreB = calculate_score(B1, B2, B3);

    if (scoreA > scoreB) {
        cout << "Alice" << endl;
    } else if (scoreB > scoreA) {
        cout << "Bob" << endl;
    } else {
        cout << "Tie" << endl;
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
