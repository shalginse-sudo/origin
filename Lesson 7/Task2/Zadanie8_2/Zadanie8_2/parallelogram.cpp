#include "Parallelogram.h"
#include "exception.h"

Parallelogram::Parallelogram(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_)
    : Quadrangle("Параллелограм", a_, b_, c_, d_, A_, B_, C_, D_)
{
    if(a != c) {
        throw Exception("стороны a и c не равны");
    }

    if(b != d) {
        throw Exception("стороны b и d не равны");
    }

    if(A != C) {
        throw Exception("углы A и C не равны");
    }

    if(B != D) {
        throw Exception("углы B и D не равны");
    }
}
