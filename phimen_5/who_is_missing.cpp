#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> count(N + 1, 0);

    for (int i = 0; i < 4 * N - 1; i++) {
        int A;
        cin >> A;
        count[A]++;
    }

    for (int k = 1; k <= N; k++) {
        if (count[k] == 3) {
            cout << k << endl;
            break;
        }
    }

    return 0;
}
