#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int safeBirds = 0;

        bool wolfFound = false;

        for (int i = 0; i < N; i++) {
            if (S[i] == '1') {
                wolfFound = true;
            } else {
                if (!wolfFound) {
                    safeBirds++;
                }
            }
        }

        cout << safeBirds << endl;
    }

    return 0;
}
