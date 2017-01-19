//
// Created by jazula on 1/19/17.
//

#ifndef LINEARALGEBRA_READER_HPP
#define LINEARALGEBRA_READER_HPP

#include <iostream>
#include <fstream>
#include <string>

using std::ifstream;
using std::string;

class Reader {
public:
    Reader(const string filepath);
    virtual ~Reader();

    void open_file(const string filepath);
    string get_line();
    bool next_line() const;

private:
    ifstream file;
};


#endif //LINEARALGEBRA_READER_HPP
