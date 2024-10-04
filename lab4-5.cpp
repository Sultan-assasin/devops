#include <iostream>
#include <cmath>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    int min_diff = abs(a[1] - a[0]);
    int l = 1, r = 2;  // индексы в ответе, отсчет с 1
    
    for (int i = 1; i < n - 1; ++i) {  // исправлено на i < n - 1
        int diff = abs(a[i + 1] - a[i]);
        if (diff < min_diff) {
            min_diff = diff;
            l = i + 1;
            r = i + 2;
        }
    }

    std::cout << l << " " << r << std::endl;

    return 0;
}
