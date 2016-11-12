#include <iostream>
#include "week12.h"

namespace w12ns2 {

    int myMax(int a, int b) {
        std::cout << "max of " << a << " and " << b << std::endl;

        //return a > b ? a : b;

        if (a > b ) {
            return a;
        } else {
            return b;
        }

    }

}
