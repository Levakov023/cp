#include <iostream>



int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);


    int amount{};
    std::cin >> amount;
    int a{0};
    int b{0};
    int c{0};

    for (int i{0}; i < amount ; i++) {
        int ta, tb, tc;
        std::cin >> ta >> tb >> tc;
        a+=ta; b+=tb; c+=tc;
    }

    if (a==0 && b==0 && c==0)
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;

}

