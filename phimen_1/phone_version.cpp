#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int X;
    cin >> X;

    cout << "K" << setw(2) << setfill('0') << (X % 100) << endl;

    return 0;
}
