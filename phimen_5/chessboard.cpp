#include <iostream>
#include <string>
using namespace std;

int main() {
    string S[8];

    for (int i = 0; i < 8; i++) {
        cin >> S[i];
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (S[i][j] == '*') {
                char column = 'a' + j;

                int row = 8 - i;

                cout << column << row << endl;
                return 0;
            }
        }
    }

    return 0;
}
