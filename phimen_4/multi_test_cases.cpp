#include <iostream>

void solve() {
    int N;
    std::cin >> N;
    int odd_count = 0;
    for (int i = 0; i < N; ++i) {
        int A;
        std::cin >> A;
        if (A % 2 != 0) {
            odd_count++;
        }
    }
    std::cout << odd_count << std::endl;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
