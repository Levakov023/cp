#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
// problem can be found here : https://atcoder.jp/contests/abc455/tasks/abc455_c
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);


    long long N, K ;
    std::cin >> N>> K;
    std::map<long long, long long> sums;
    std::vector<long long> vec(N);

    for (long long idx{0}; idx < N; idx++)
        std::cin >> vec[idx];

    for (const auto num : vec) {
        sums[num] += num;
    }

    std::vector<long long> sumVec;
    sumVec.reserve(sums.size());
for (auto& A : sums)
        sumVec.push_back(A.second);

    std::sort(sumVec.begin(), sumVec.end(), std::greater<long long>());


    //for (long long i{0}; i < K; i++)
    //    sumVec.erase(sumVec.begin());

    long long res{0};
    //for (const auto& n : sumVec)
    //    res += n;
    if (K < sumVec.size()) {
        for (long long idx {K}; idx < sumVec.size(); idx++)
            res+= sumVec[idx];
        std::cout << res ;
    }
    else
        std::cout << 0;
    return 0;
}
