//https://atcoder.jp/contests/abc085/tasks/abc085_c


#include <iostream>
#include <array>
int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, Y;

    std::cin >> N >> Y;
    bool found {false};
    for (int x{0}; x <= Y/10000; x++) {
        if (found)
            break;
        for (int y{0}; y <= Y/5000; y ++) {
            if (found)
                break;
            int z { N - (x + y)};
            if (z>=0){
                if (((x*10000 + y*5000 + z*1000) == Y) && ((x + y + z) == N)) {
                    std::cout << x << " " << y << " " << z ;
                    found = true;
                }
            }
        }
    }
    if (!found)
        std::cout << "-1 -1 -1";

}