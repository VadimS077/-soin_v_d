#include <iostream>
#include <vector>


int main() {
    std::ios_base::sync_with_stdio(false);
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n = 0;
        std::cin >> n;
        std::string s;
        std::cin >> s;
        int k = 0;
        std::cin >> k;
        std::vector <char> vec;
        for (int j = 0; j < k; j++) {
            char c;
            std::cin >> c;
            vec.push_back(c);
        }int y = 0;
        int maxp = 0;
        for (int j = 0; j < n; j++) {
            for (int g = 0; g < vec.size(); g++) {
                if (s[j] == vec[g]) {
                    maxp = std::max(maxp, abs(y - j));
                    y = j;
                    break;

                }
            }
        }std::cout << maxp << std::endl;


    }
}