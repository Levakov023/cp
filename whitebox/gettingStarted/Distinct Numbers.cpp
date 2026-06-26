//https://cses.fi/problemset/task/1083
// Difficulty = Easy+ 2


#include <map>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    std::cin >>N ;

    std::map<int, int > input{};

    for (std::size_t idx{0}; idx < N ; idx++ ) {
        int temp;
        std::cin >> temp;
        input[temp] += temp;
    }

    int res{0};
    for (const auto& k : input)
        res+= 1;
    std::cout << res;
}

