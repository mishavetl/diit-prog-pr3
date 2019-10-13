#pragma once

#include "double.h"

namespace lr3 {
    namespace sequence {
        Double member(int i, const Double &v3, const Double &v2, const Double &v1);
        Double calculate(std::ostream &stream, int n,
                         int i = 1, const Double &v3 = 1.5, const Double &v2 = 0, const Double &v1 = 0);
    }
}