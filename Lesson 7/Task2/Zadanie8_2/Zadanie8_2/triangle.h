#pragma once
#include "figure.h"

class Triangle : public Figure
{
protected:
    //ƒлины сторон
    int a;
    int b;
    int c;

    //”глы в градусах
    int A;
    int B;
    int C;

    Triangle(const std::string &name_, int a_, int b_, int c_, int A_, int B_, int C_);

public:
    Triangle(int a_, int b_, int c_, int A_, int B_, int C_);

    int get_a();
    int get_b();
    int get_c();
    int get_A();
    int get_B();
    int get_C();

    std::string get_info() override;
};