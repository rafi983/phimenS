#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int a = N / 100;
    int b = (N / 10) % 10;
    int c = N % 10;

    int bca = b * 100 + c * 10 + a;
    int cab = c * 100 + a * 10 + b;

    std::cout << N + bca + cab << std::endl;

    return 0;
}
