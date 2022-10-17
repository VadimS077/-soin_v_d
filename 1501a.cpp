﻿#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;
        std::vector <float> a;
        std::vector <float> b;
        std::vector <int> t;
        for (int i = 0; i < n; i++) {
            float ai = 0, bi = 0;
            std::cin >> ai >> bi;
            a.push_back(ai);
            b.push_back(bi);


        }
        for (int i = 0; i < n; i++) {
            int ti = 0;
            std::cin >> ti;
            t.push_back(ti);
        }int preb = 0;
        int wait = 0;
        for (int i = 0; i < n - 1; i++) {
            preb = preb + a[i] - b[i - 1] + t[i];

            wait = ceil((b[i] - a[i]) / 2);


            preb = wait + preb;
            if (preb < b[i]) {
                preb = b[i];
            }

        }std::cout << std::fixed << std::setprecision(0);
        std::cout << preb + a[n - 1] - b[n - 2] + t[n - 1] << std::endl;

    }
}