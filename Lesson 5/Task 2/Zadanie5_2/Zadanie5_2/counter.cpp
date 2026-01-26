#include "counter.h"

Counter::Counter(int g)
{
    gip = g;
}

Counter::Counter()
{
    gip = 1;
}

int Counter::increase()
{
    int inc = gip++;
    return inc;
}

int Counter::decrease()
{
    int dec = gip--;
    return dec;
}

void Counter::view()
{
    int vi = gip;
    std::cout << vi << std::endl;
}