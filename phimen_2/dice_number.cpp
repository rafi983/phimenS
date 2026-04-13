#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int A[3], B[3];

        for(int i = 0; i < 3; i++) {
            cin >> A[i];
        }

        for(int i = 0; i < 3; i++) {
            cin >> B[i];
        }

        sort(A, A + 3, greater<int>());
        sort(B, B + 3, greater<int>());

        int aliceScore = A[0] * 100 + A[1] * 10 + A[2];
        int bobScore = B[0] * 100 + B[1] * 10 + B[2];

        if(aliceScore > bobScore) {
            cout << "Alice" << endl;
        } else if(bobScore > aliceScore) {
            cout << "Bob" << endl;
        } else {
            cout << "Tie" << endl;
        }
    }

    return 0;
}

