//
// Created by jazula on 1/19/17.
//

#ifndef LINEARALGEBRA_CHARACTERREADER_HPP
#define LINEARALGEBRA_CHARACTERREADER_HPP

#include "Reader.hpp"
#include <vector>
#include <memory>


using std::vector;
using std::unique_ptr;

template<class T>
class ObjectFromFileBuilder : Reader {
public:
    ObjectFromFileBuilder(const string& filepath);
    vector<unique_ptr<T>> get_objects();

};

#include "ObjectFromFileBuilder.tpp"

#endif //LINEARALGEBRA_CHARACTERREADER_HPP
