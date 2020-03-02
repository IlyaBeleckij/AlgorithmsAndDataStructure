#include <iostream>
#include <vector>


int main() {
    int t, n, k, m, dimension, sum;
    std::vector<int> ans;
    std::cin >> t;
    for (int i=0; i < t; i++){
        std::cin >> n >> k;
        m = n / k;
        dimension = n % k;
        sum = 0;
        for (int j = 0; j < dimension; j++) {
            n = n - (m + 1);
            sum += (n * (m + 1));
        }
        for (int j = 0; j < (k - dimension); j++) {
            n = n - m;
            sum += (n * m);
        }
        ans.push_back(sum);
    }

    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << std::endl;
    }
}
