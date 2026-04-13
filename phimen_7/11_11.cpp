#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool check(int m, int d) {
    string s = to_string(m) + to_string(d);
    char first = s[0];
    for (char c : s) {
        if (c != first) return false;
    }
    return true;
}

int main() {
    int N;
    if (!(cin >> N)) return 0;

    int total_repdigit_dates = 0;
    for (int i = 1; i <= N; ++i) {
        int D;
        cin >> D;
        for (int j = 1; j <= D; ++j) {
            if (check(i, j)) {
                total_repdigit_dates++;
            }
        }
    }

    cout << total_repdigit_dates << endl;

    return 0;
}
