#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;

        int unrated = 2 * N - X;
        int pairs_ru = min(X, unrated);
        int remaining_rated = X - pairs_ru;

        cout << remaining_rated << endl;
    }
    return 0;
}
