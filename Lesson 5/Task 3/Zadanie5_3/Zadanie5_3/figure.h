#pragma once
#include <string>

class Figure
{
protected:
    int sides_count ;
    std::string name;

public:
    Figure();

    int get_sides_count();
    std::string get_name();
};

