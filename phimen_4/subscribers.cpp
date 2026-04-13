#include <iostream>

int main() {
    int N;
    if (std::cin >> N) {
        if (N <= 999) {
            std::cout << N << std::endl;
        } else {
            int length = 0;
            int temp = N;
            while (temp > 0) {
                temp /= 10;
                length++;
            }



            int powerOf10 = 1;
            for (int i = 0; i < length - 3; ++i) {
                powerOf10 *= 10;
            }

            std::cout << (N / powerOf10) * powerOf10 << std::endl;
        }
    }
    return 0;
}
