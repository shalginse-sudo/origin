#include "figure.h"

Figure::Figure(int sides_count_, const std::string &name_)
    : sides_count(sides_count_),name(name_)
{
}

int Figure::get_sides_count()
{
    return sides_count;
}

std::string Figure::get_name()
{
    return name;
}

std::string Figure::get_info()
{
    return "";
}