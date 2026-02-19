#pragma once
#include <stdexcept>

class Exception
    : public std::domain_error
{
public:
    Exception(const std::string &message);
};