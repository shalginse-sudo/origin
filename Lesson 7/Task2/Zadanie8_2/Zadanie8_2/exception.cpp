#include "exception.h"

Exception::Exception(const std::string &message)
    : domain_error(message)
{}