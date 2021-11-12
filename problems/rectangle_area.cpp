#include <iostream>

int computeArea(int ax1,
                int ay1,
                int ax2,
                int ay2,
                int bx1,
                int by1,
                int bx2,
                int by2) {
    return (ax2 - ax1) * (ay2 - ay1) + (bx2 - bx1) * (by2 - by1) -
           std::max(0, (std::min(ax2, bx2) - std::max(ax1, bx1))) *
               std::max(0, (std::min(ay2, by2) - std::max(ay1, by1)));
}

int main() {
    int ax1 = -3, ay1 = 0, ax2 = 3, ay2 = 4, bx1 = 0, by1 = -1, bx2 = 9,
        by2 = 2;
    std::cout << computeArea(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2);
    return 0;
}
