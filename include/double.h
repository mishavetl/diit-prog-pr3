#pragma once

#include <cmath>
#include "config.h"

namespace lr3 {
    class Double {
    public:
        Double(double value) : value(value) {}

        bool operator==(const Double &other) const;

        Double operator-() const;
        Double operator-(const Double &other) const;
        Double operator+(const Double &other) const;
        Double operator*(const Double &other) const;
        Double operator/(const Double &other) const;

        Double operator^(const Double &exponent) const;
        Double operator^(int exponent) const;

        double value = 0;
    };

    Double abs(const Double &num);
    std::istream& operator>>(std::istream& stream, Double& num);
    std::ostream& operator<<(std::ostream& stream, const Double& num);
}