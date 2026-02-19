#include "equilateralTriangle.h"
#include "exception.h"
EquilateralTriangle::EquilateralTriangle(int a_, int b_, int c_, int A_, int B_, int C_)
    : Triangle("–авносторонний треугольник", a_, b_, c_, A_, B_, C_)
{
    if(a != b || b != c || a != c) {
        throw Exception("все стороны не равны");
    }

    if(A != 60 || B != 60 || C != 60) {
        throw Exception("один из углов не равен 60");
    }
}
