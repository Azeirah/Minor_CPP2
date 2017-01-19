//
// Created by jazula on 1/19/17.
//

#include "Reader.hpp"
#include "../util/StringUtil.hpp"

//todo exception handling
Reader::Reader(const string filepath)
{
    open_file(filepath);
}

void Reader::open_file(const string filepath)
{
    try {
        this->file.open(filepath, ifstream::in);
    } catch (std::ios_base::failure& ex) {
        std::cout << ex.what() << std::endl;
        //todo throw exception to a level higher
    }
}

Reader::~Reader()
{
    // file would also be closed on destruction of the ifstream object
    if (file.is_open()) {
        file.close();
    }
}

string Reader::get_line()
{
    string line;

    std::getline(file, line);
    StringUtil::remove_all_new_lines_in_place(line);
    StringUtil::convert_chars_in_place(line, ';', ' ');

    return line;
}

bool Reader::next_line() const
{
    // todo perhaps some more error handling?
    // https://stackoverflow.com/questions/29630735/in-c-how-can-i-create-multiple-objects-of-a-class-from-a-file-dynamically

    return file.is_open()
       &&  file.good()
       && !file.eof();
}
