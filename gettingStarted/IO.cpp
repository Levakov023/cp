#include <iostream>
#include <vector>
#include <climits>
// https://atcoder.jp/contests/abc169/tasks/abc169_b
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int amount{};
    std::cin >> amount;
    std::vector<long long> arr(amount);

    for (int i{0}; i < amount; i++)
        std::cin >> arr[i];

    bool hasZero {false};
    bool hasOverflow {false};
    long long res{1};
    for (const auto& num : arr) {
        if (num == 0) {
            hasZero = true;
            break;
        }


        if (res>1000000000000000000LL/num) {
            hasOverflow = true;
        }

        res *= num;
    }
    if (hasZero)
        std::cout << 0;
    else if (hasOverflow)
        std::cout << -1;
    else
        std::cout << res;

    return 0;
}