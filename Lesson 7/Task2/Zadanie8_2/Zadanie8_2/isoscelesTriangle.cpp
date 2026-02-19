#include"isoscelesTriangle.h"
#include "exception.h"
IsoscelesTriangle::IsoscelesTriangle(int a_, int b_, int c_, int A_, int B_, int C_)
    : Triangle("Равнобедренный треугольник", a_, b_, c_, A_, B_, C_)
{
    if(a != c) {
        throw Exception("стороны a и c не равны");
    }

    if(A != C) {
        throw Exception("углы A и C не равны");
    }
}
