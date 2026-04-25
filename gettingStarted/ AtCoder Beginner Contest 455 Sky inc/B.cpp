// https://atcoder.jp/contests/abc455/tasks/abc455_b

#include <iostream>
#include <vector>
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int H, W;
    std::cin >> H >> W;

    std::vector<std::string> vec(H);

    for (int i{0}; i<H ; i++)
        std::cin >> vec[i];


    int out{0};

    for (int h1{0}; h1< H ; h1++)
        for (int h2 = h1; h2 < H ; h2++)
            for (int w1 {0} ; w1 < W ; w1++)
                for (int w2 = w1 ; w2 < W ; w2++) {
                    bool flag{true};
                    for (int i = h1 ; i <= h2; i++) {
                        for (int j = w1; j <= w2; j++) {
                            if (vec[i][j] != vec[h1+h2-i][w1+w2-j])
                                flag = false;
                        }
                    }
                    if (flag)
                        out+=1;
                }
    std::cout << out;
}