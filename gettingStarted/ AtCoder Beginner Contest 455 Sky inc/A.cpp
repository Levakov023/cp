#include <iostream>

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b, c;
    std::cin >> a>>b>>c;

    if (a != b && b==c)
        std::cout << "Yes";
    else
        std::cout << "No";


    return 0;
}