#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N, A, B;
        cin >> N >> A >> B;

        int minDistance = INT_MAX;

        for(int i = 0; i < N; i++) {
            int X, Y;
            cin >> X >> Y;

            int distance = abs(X - A) + abs(Y - B);
            minDistance = min(minDistance, distance);
        }

        cout << minDistance << endl;
    }

    return 0;
}

