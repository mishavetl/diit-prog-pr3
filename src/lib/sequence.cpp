#include <iostream>

#include "sequence.h"

using namespace lr3;

Double lr3::sequence::member(int i, const Double &v3, const Double &v2, const Double &v1) {
    return v3 * (i + 1) / (i * i + 1) - v2 * v1;
}

Double lr3::sequence::calculate(std::ostream &stream, int n, int i, const Double &v3, const Double &v2, const Double &v1) {
    stream << v1 << ' ';
    return (i == n) ? v1 : calculate(stream, n, i + 1, member(i + 3, v3, v2, v1), v3, v2);
}