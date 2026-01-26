#pragma once
#include <string>

class Figure
{
protected:
    int sides_count = 0;
    std::string name = "Фигура";

public:
    Figure();

    int get_sides_count();
    std::string get_name();
};
