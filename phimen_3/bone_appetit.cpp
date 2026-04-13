#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int X, Y;
    cin >> X >> Y;

    int total_treats = (N * X) + (M * Y);

    cout << total_treats << endl;

    return 0;
}
