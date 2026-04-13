#include <iostream>
#include <string>

int main() {
    std::string n;
    std::cin >> n;
    int count = 0;
    for (char c : n) {
        if (c == '4' || c == '7') {
            count++;
        }
    }
    if (count == 4 || count == 7) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
