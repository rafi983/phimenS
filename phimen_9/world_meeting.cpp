#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    if (!(cin >> N)) return 0;

    vector<pair<int, int>> bases(N);
    for (int i = 0; i < N; ++i) {
        cin >> bases[i].first >> bases[i].second;
    }

    long long max_employees = 0;

    for (int t = 0; t < 24; ++t) {
        long long current_employees = 0;
        for (int i = 0; i < N; ++i) {
            int w = bases[i].first;
            int x = bases[i].second;

            int local_start_time = (t + x) % 24;

            if (local_start_time >= 9 && local_start_time <= 17) {
                current_employees += w;
            }
        }
        max_employees = max(max_employees, current_employees);
    }

    cout << max_employees << endl;

    return 0;
}

