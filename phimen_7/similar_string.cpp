#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool areSimilar(char x, char y) {
    if (x == y) return true;
    if ((x == '1' && y == 'l') || (x == 'l' && y == '1')) return true;
    if ((x == '0' && y == 'o') || (x == 'o' && y == '0')) return true;
    return false;
}

int main() {
    int N;
    if (!(cin >> N)) return 0;

    string S, T;
    cin >> S >> T;

    for (int i = 0; i < N; ++i) {
        if (!areSimilar(S[i], T[i])) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
