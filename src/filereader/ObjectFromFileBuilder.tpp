//
// Created by jazula on 1/19/17.
//

#include "ObjectFromFileBuilder.hpp"
#include <sstream>

template<class T>
ObjectFromFileBuilder::ObjectFromFileBuilder<T>(const string& filepath)
: Reader(filepath)
{
}

template<class T>
vector<unique_ptr<T>> ObjectFromFileBuilder<T>::get_objects()
{
    vector<unique_ptr<T>> objects;
    while (this->next_line()) {
        objects.push_back(unique_ptr<T>());
        std::istringstream(this->get_line()) >> *objects.back();
    }

    return objects;
}
