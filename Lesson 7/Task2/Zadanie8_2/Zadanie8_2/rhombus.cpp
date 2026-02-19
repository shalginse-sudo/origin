#include "rhombus.h"
#include "exception.h"


Rhombus::Rhombus(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_)
    : Quadrangle("Ромб", a_, b_, c_, d_, A_, B_, C_, D_)
{
    if(a != b || b != c || c != d || d != a) {
        throw Exception("cтороны не равны");
    }

    if(A != C) {
        throw Exception("углы A и C не равны");
    }

    if(B != D) {
        throw Exception("углы B и D не равны");
    }
}
