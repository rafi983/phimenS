#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int H, X, Y;
        cin >> H >> X >> Y;

        int onlyNormal = (H + X - 1) / X;  // This is ceil(H/X)

        int withSpecial;
        if(Y >= H) {
            withSpecial = 1;
        } else {
            int remainingHealth = H - Y;
            int normalAttacksNeeded = (remainingHealth + X - 1) / X;  // ceil((H-Y)/X)
            withSpecial = 1 + normalAttacksNeeded;
        }

        cout << min(onlyNormal, withSpecial) << endl;
    }

    return 0;
}

