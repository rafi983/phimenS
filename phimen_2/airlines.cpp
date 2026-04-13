#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int X, N;
        cin >> X >> N;

        int planesNeeded = (N + 99) / 100;

        int newPlanes = max(0, planesNeeded - X);

        cout << newPlanes << endl;
    }

    return 0;
}

