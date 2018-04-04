//
// Created by 张昊月 on 2018/4/4.
//
#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item total;
    if (std::cin >> total) {
        Sales_item item;
        int count = 1;

        while (std::cin >> item) {
            if (item.isbn() == total.isbn()) {
                total += item;
                ++count;
            } else {
                std::cout << total << std::endl;
                std::cout << total.isbn() << " shown for " << count << " times. " << std::endl;
                total = item;
                count = 1;
            }
        }

        std::cout << total << std::endl;
        std::cout << total.isbn() << " shown for " << count << " times. " << std::endl;
    }
}