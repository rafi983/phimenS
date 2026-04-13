#include <iostream>

int main() {
    int N;
    if (std::cin >> N) {
        std::cout << 'L';
        for (int i = 0; i < N; ++i) {
            std::cout << 'o';
        }
        std::cout << "ng" << std::endl;
    }
    return 0;
}
