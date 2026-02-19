#pragma once
#include "figure.h"

class Quadrangle : public Figure
{
protected:
    //ƒлины сторон
    int a;
    int b;
    int c;
    int d;

    //”глы в градусах
    int A;
    int B;
    int C;
    int D;

    Quadrangle(const std::string &name_, int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_);

public:
    Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_);

    int get_a();
    int get_b();
    int get_c();
    int get_d();
    int get_A();
    int get_B();
    int get_C();
    int get_D();

    std::string get_info() override;
};
