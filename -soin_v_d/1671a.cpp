#include <iostream>
#include <string>

void prove(std::string s) {
    
    int k = 0;
    int war = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i + 1] && k == 0) {
            k = 1;
        }
        if (s[i] != s[i + 1] && k == 0) {
            war = 1;
            std::cout << "no" << std::endl;
            break;

        }
        if (s[i] != s[i + 1] && k == 1) {
            k = 0;
        }

    }
    if (k == 0 && war==0) {
        std::cout<<"no"<<std::endl;
    }
    else {
        std::cout << "yes" << std::endl;
    }

}


int main() {
    int t = 0;
    std::cin >> t;

    while (t--) {
        std::string s;
        std::cin >> s;
        prove(s);
    }
    
   
}
