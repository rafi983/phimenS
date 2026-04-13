#include <iostream>

using namespace std;

void solve() {
    int S;
    cin >> S;
    int frames_per_second = 24;
    int words_per_frame = 1000;
    int total_words = S * frames_per_second * words_per_frame;
    cout << total_words << endl;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}
