#pragma once

#include "double.h"

namespace lr3 {
    namespace sequence {
        /**
         * Construct member of the sequence
         * @param i - number of the member
         * @param v3 - v(i - 1)
         * @param v2 - v(i - 2)
         * @param v1 - v(i - 3)
         * @return v(i)
         */
        Double member(int i, const Double &v3, const Double &v2, const Double &v1);

        /**
         * Calculate members and output them to the specified stream
         * @param stream - stream to be used for output
         * @param n - number of members to calculate
         * @param i - current member number
         * @param v3 - v(i + 2)
         * @param v2 - v(i + 1)
         * @param v1 - v(i)
         * @return v(i)
         */
        Double calculate(std::ostream &stream, int n,
                         int i = 1, const Double &v3 = 1.5, const Double &v2 = 0, const Double &v1 = 0);
    }
}