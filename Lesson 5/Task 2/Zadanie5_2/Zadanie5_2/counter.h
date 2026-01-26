#pragma once
#include <iostream>

class Counter
{
    int gip;

public:
    Counter(int g);
    Counter();

    int increase();
    int decrease();
    void view();
};
