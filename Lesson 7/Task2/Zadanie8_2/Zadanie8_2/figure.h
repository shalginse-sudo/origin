#pragma once
#include <string>

class Figure
{
protected:
    int sides_count ;
    std::string name;

public:
    Figure(int sides_count_, const std::string &name_);

    int get_sides_count();
    std::string get_name();

    virtual std::string get_info();
};

