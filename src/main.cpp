#include <iostream>

#include "sequence.h"

int main() {
    int n;
    std::cin >> n;

    lr3::sequence::calculate(std::cout, n);

    return 0;
}
