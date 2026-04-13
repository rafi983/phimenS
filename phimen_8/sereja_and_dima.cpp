#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n <= 0) {
        return 0;
    }

    vector<int> cards(n);
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }

    int left = 0;
    int right = n - 1;
    int sereja = 0;
    int dima = 0;
    int turn = 0;

    while (left <= right) {
        int pick_left = cards[left];
        int pick_right = cards[right];

        int chosen;
        if (pick_left >= pick_right) {
            chosen = pick_left;
            left++;
        } else {
            chosen = pick_right;
            right--;
        }

        if (turn == 0) {
            sereja += chosen;
        } else {
            dima += chosen;
        }
        turn ^= 1;
    }

    cout << sereja << " " << dima << endl;
    return 0;
}