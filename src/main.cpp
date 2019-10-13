#include <iostream>

#include "sequence.h"

int main() {
    int n;
    std::cout << "Enter the number of members to calculate (n): ";
    std::cin >> n;

    std::cout << "sequence = ";
    lr3::sequence::calculate(std::cout, n);

    return 0;
}
