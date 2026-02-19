#include "triangle.h"
#include "exception.h"


Triangle::Triangle(const std::string &name_, int a_, int b_, int c_, int A_, int B_, int C_)
    : Figure(3, name_), a(a_), b(b_), c(c_), A(A_), B(B_), C(C_)
{
    if((A + B + C) != 180) {
        throw Exception("сумма углов не равна 180");
    }
}

Triangle::Triangle(int a_, int b_, int c_, int A_, int B_, int C_)
    : Triangle("Треугольник", a_, b_, c_, A_, B_, C_)
{}


int Triangle::get_a()
{
    return a;
}

int Triangle::get_b()
{
    return b;
}

int Triangle::get_c()
{
    return c;
}

int Triangle::get_A()
{
    return A;
}

int Triangle::get_B()
{
    return B;
}

int Triangle::get_C()
{
    return C;
}

std::string Triangle::get_info()
{
    return "стороны " + std::to_string(a) + ", " + std::to_string(b) + ", " + std::to_string(c) + "; "
        + "углы " + std::to_string(A) + ", " + std::to_string(B) + ", " + std::to_string(C);
}
