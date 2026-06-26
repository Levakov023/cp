//https://cses.fi/problemset/task/1083


#include <iostream>
#include <vector>
#include <algorithm>
int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    std::cin >> N;
    std::vector<int> vec(N-1);

    for (int i{0}; i < N-1; i++ ) {
        std::cin >> vec[i];
    }

    std::sort(vec.begin(), vec.end());
    if (vec[0] != 1)
        std::cout << 1;
    else if (vec[vec.size()-1] != N)
        std::cout << N;
    else {
        for (std::size_t i{0}; i < vec.size(); i++)
            if (vec[i+1] != vec[i] + 1) {
                std::cout << vec[i] + 1;
                break;
            }
    }
}