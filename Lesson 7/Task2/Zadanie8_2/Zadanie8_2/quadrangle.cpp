#include "quadrangle.h"
#include "exception.h"


Quadrangle::Quadrangle(const std::string &name, int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_)
    : Figure(4, name), a(a_), b(b_), c(c_), d(d_), A(A_), B(B_), C(C_), D(D_)
{
    if((A + B + C + D) != 360) {
        throw Exception("сумма углов не равна 360");
    }
}

Quadrangle::Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_)
    : Quadrangle("Четырехугольник", a_, b_, c_, d_, A_, B_, C_, D_)
{}

int Quadrangle::get_a()
{
    return a;
}

int Quadrangle::get_b()
{
    return b;
}

int Quadrangle::get_c()
{
    return c;
}

int Quadrangle::get_d()
{
    return d;
}

int Quadrangle::get_A()
{
    return A;
}

int Quadrangle::get_B()
{
    return B;
}

int Quadrangle::get_C()
{
    return C;
}

int Quadrangle::get_D()
{
    return D;
}

std::string Quadrangle::get_info()
{
    return "стороны " + std::to_string(a) + ", " + std::to_string(b) + ", " + std::to_string(c) + ", " + std::to_string(d) + "; "
        + "углы " + std::to_string(A) + ", " + std::to_string(B) + ", " + std::to_string(C) + ", " + std::to_string(D);
}

