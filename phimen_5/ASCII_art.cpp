#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W;
    if (cin >> H >> W) {
        for (int i = 0; i < H; ++i) {
            for (int j = 0; j < W; ++j) {
                int val;
                cin >> val;
                if (val == 0) {
                    cout << '.';
                } else {
                    cout << (char)('A' + val - 1);
                }
            }
            cout << endl;
        }
    }
    return 0;
}
