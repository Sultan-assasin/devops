#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int sector = 1;
    int left_sect = 0;
    int max_right = 0;

    int current_len = 1;
    int current_left = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            current_len++;
        } else {
            if (current_len > sector) {
                sector = current_len;
                left_sect = current_left;
                max_right = i - 1;
            }
            current_len = 1;
            current_left = i;
        }
    }

    if (current_len > sector) {
        sector = current_len;
        left_sect = current_left;
        max_right = n - 1;
    }

    std::cout << sector << std::endl;
    std::cout << left_sect + 1 << " " << max_right + 1 << std::endl;
    
    return 0;
}
