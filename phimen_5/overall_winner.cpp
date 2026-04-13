#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string S;

    cin >> N;
    cin >> S;

    int takahashi_wins = 0;
    int aoki_wins = 0;

    for (int i = 0; i < N; i++) {
        if (S[i] == 'T') {
            takahashi_wins++;
        } else {
            aoki_wins++;
        }
    }

    if (takahashi_wins > aoki_wins) {
        cout << "T" << endl;
    } else if (aoki_wins > takahashi_wins) {
        cout << "A" << endl;
    } else {
        int t_count = 0;
        int a_count = 0;

        for (int i = 0; i < N; i++) {
            if (S[i] == 'T') {
                t_count++;
            } else {
                a_count++;
            }

            if (t_count == takahashi_wins) {
                cout << "T" << endl;
                break;
            }
            if (a_count == aoki_wins) {
                cout << "A" << endl;
                break;
            }
        }
    }

    return 0;
}
