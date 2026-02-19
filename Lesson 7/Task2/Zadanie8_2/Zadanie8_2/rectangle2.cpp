#include "rectangle2.h"
#include "exception.h"


Rectangle2::Rectangle2(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_)
    : Quadrangle("Прямоугольник", a_, b_, c_, d_, A_, B_, C_, D_)
{
    if(a != c) {
        throw Exception("стороны a и c не равны");
    }

    if(b != d) {
        throw Exception("стороны b и d не равны");
    }

    if(A != 90 || B != 90 || C != 90 || D != 90) {
        throw Exception("один из углов не равен 90");
    }
}
