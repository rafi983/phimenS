#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long A, B, K;
    if (cin >> A >> B >> K) {
        long long eat_A = min(A, K);
        A -= eat_A;
        K -= eat_A;

        long long eat_B = min(B, K);
        B -= eat_B;

        cout << A << " " << B << endl;
    }
    return 0;
}
