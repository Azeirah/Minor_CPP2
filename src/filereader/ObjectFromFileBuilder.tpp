//
// Created by jazula on 1/19/17.
//

#include "ObjectFromFileBuilder.hpp"
#include <sstream>
#include <bitset>

template<class T>
ObjectFromFileBuilder<T>::ObjectFromFileBuilder(const string& filepath)
: Reader(filepath)
{
}

template<class T>
vector<unique_ptr<T>> ObjectFromFileBuilder<T>::get_objects()
{
    vector<unique_ptr<T>> objects;

    while (this->next_line()) {
        unique_ptr<T> object (new T());

        std::istringstream stream(this->get_line());
        stream >> *object;

        if (!stream.fail()) {
            objects.push_back(std::move(object));
        }
    }

    return objects;
}