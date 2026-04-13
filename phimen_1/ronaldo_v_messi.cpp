#include <iostream>
using namespace std;

int main() {
    int A, B, X, Y;
    cin >> A >> B >> X >> Y;

    int messi = 2 * A + B;
    int ronaldo = 2 * X + Y;

    if (messi > ronaldo) {
        cout << "Messi" << endl;
    } else if (ronaldo > messi) {
        cout << "Ronaldo" << endl;
    } else {
        cout << "Equal" << endl;
    }

    return 0;
}
