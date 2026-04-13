#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int current;
    cin >> current;

    for (int i = 1; i < n; i++) {
        int next;
        cin >> next;

        if (next > current) {
            current = next;
        } else {
            for (int j = i + 1; j < n; j++) {
                int temp;
                cin >> temp;
            }
            break;
        }
    }

    cout << current << endl;

    return 0;
}
