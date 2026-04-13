#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N, D;
    if (!(cin >> N >> D)) return 0;

    vector<string> S(N);
    for (int i = 0; i < N; ++i) {
        cin >> S[i];
    }

    int max_consecutive_days = 0;
    int current_consecutive_days = 0;

    for (int j = 0; j < D; ++j) {
        bool all_free = true;
        for (int i = 0; i < N; ++i) {
            if (S[i][j] == 'x') {
                all_free = false;
                break;
            }
        }

        if (all_free) {
            current_consecutive_days++;
        } else {
            max_consecutive_days = max(max_consecutive_days, current_consecutive_days);
            current_consecutive_days = 0;
        }
    }
    max_consecutive_days = max(max_consecutive_days, current_consecutive_days);

    cout << max_consecutive_days << endl;

    return 0;
}

