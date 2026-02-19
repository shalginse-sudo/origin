#include "square.h"
#include "exception.h"


Square::Square(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_)
    : Quadrangle("Квадрат", a_, b_, c_, d_, A_, B_, C_, D_)
{
    if(a != b || b != c || c != d || d != a) {
        throw Exception("cтороны не равны");
    }

    if(A != 90 || B != 90 || C != 90 || D != 90) {
        throw Exception("один из углов не равен 90");
    }
}