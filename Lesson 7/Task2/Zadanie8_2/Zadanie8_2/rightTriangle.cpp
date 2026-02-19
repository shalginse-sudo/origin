#include"rightTriangle.h"
#include "exception.h"


//Прямоугольный треугольник

RightTriangle::RightTriangle(int a_, int b_, int c_, int A_, int B_, int C_)
    : Triangle("Прямоугольный треугольник", a_, b_, c_, A_, B_, C_)
{
    if(C != 90) {
        throw Exception("угол C не равен 90");
    }
}
