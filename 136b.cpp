#include<iostream>
#include <cmath>

int main()
{
    int a, c, i = 0, b = 0;
    std::cin >> a >> c;
    while (a || c)
    {
        b += (c % 3 - a % 3 + 3) % 3 * pow(3, i);
        i++;
        c /= 3, a /= 3;
    }
    std::cout << b;
}
