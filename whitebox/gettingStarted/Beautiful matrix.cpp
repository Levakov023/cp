#include <iostream>
#include <vector>
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);


    std::vector<int> vec(25);
    for (int i{0}; i<25; i++) {
        std::cin >> vec[i];
    }

    int y{0};
    for (int i{0}; i<vec.size(); i++) {
        if (i % 5 == 0)
            y++;
        if (vec[i] == 1) {
            std::cout << std::abs(y-3) + std::abs((i%5 + 1)-3);
        }
    }
    return 0;

}