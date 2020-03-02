#include <iostream>


int main() {
    int n, sum = 0, max = 0, cur;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> cur;
        if (cur + sum > 0) {
            sum += cur;
        } else {
            sum = 0;
        }

        if (sum > max) {
            max = sum;
        }
    }

    std::cout << max << std::endl;
}
