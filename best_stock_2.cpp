// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int maxProfit(std::vector<int>& prices) {
    return std::transform_reduce(
        prices.cbegin(), std::prev(prices.cend()), std::next(prices.cbegin()),
        0, [](auto a, auto b) { return a + b; },
        [](auto a, auto b) { return a < b ? b - a : 0; });
}

int main() {
    std::vector v1 = {7, 1, 5, 3, 6, 4};
    std::vector v2 = {1, 2, 3, 4, 5};
    std::vector v3 = {7, 6, 4, 3, 1};
    std::cout << maxProfit(v1) << std::endl;
    std::cout << maxProfit(v2) << std::endl;
    std::cout << maxProfit(v3) << std::endl;
    return 0;
}
