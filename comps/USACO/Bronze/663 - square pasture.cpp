//https://usaco.org/index.php?page=viewproblem2&cpid=663

#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int x1, y1, x2, y2;
    int x3, y3, x4, y4;

    std::cin >> x1 >> y1 >> x2 >> y2;
    std::cin >> x3 >> y3 >> x4 >> y4;

    int width  = std::max(x2, x4) - std::min(x1, x3);
    int height = std::max(y2, y4) - std::min(y1, y3);

    int side = std::max(width, height);
    std::cout << (side * side) << "\n";

    return 0;
}