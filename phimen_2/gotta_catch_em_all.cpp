#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N, X, Y;
        cin >> N >> X >> Y;

        int totalCost = 0;

        for(int i = 0; i < N; i++) {
            int A;
            cin >> A;

            int normalCost = A * X;  // Cost using Normal Pekóballs
            int masterCost = Y;       // Cost using Master Pekóball

            totalCost += min(normalCost, masterCost);
        }

        cout << totalCost << endl;
    }

    return 0;
}
