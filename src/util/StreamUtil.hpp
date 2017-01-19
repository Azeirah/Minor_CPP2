//
// Created by jazula on 1/19/17.
//

#ifndef LINEARALGEBRA_STREAMUTIL_HPP
#define LINEARALGEBRA_STREAMUTIL_HPP


void print_state (const std::ios& stream) {
    std::cout << " good()=" << stream.good();
    std::cout << " eof()=" << stream.eof();
    std::cout << " fail()=" << stream.fail();
    std::cout << " bad()=" << stream.bad();
    std::cout << std::endl;
}

#endif //LINEARALGEBRA_STREAMUTIL_HPP
