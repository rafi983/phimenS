#include <iostream>

using namespace std;

int main() {
    long long A, B;
    if (cin >> A >> B) {
        long long attacks = (A + B - 1) / B;
        cout << attacks << endl;
    }
    return 0;
}
